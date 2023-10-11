#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int TanSuat(int[], int, int);
int DemGiaTri(int[], int, int[], int);

int main()
{
	int A[30];
	int B[30];
	int n;
	int k;
	cout << "Mang a: \n";
	Nhap(A, n);
	cout << "Mang b: \n";
	Nhap(B, k);
	cout << "So luong gia tri chi xuat hien mot trong 2 mang: " << DemGiaTri(A, n, B, k);

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "]:";
		cin >> a[i];
	}
}

int TanSuat(int a[], int n, int k)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == k)
			dem++;
	return dem;
}

int DemGiaTri(int a[], int n, int b[], int k)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		int flag = 1;
		for (int j = 0; j <= n - 1; j++)
			if (a[i] == a[j])
				flag = 0;
		if (TanSuat(b, k, a[i]) == 0 && flag == 1)
			dem++;
	}

	for (int i = 0; i <= k - 1; i++)
	{
		int flag = 1;
		for (int j = 0; j <= n - 1; j++)
			if (a[j] == a[i])
				flag = 0;
		if (TanSuat(a, n, b[i]) == 0)
			dem++;
	}

	return dem;
}