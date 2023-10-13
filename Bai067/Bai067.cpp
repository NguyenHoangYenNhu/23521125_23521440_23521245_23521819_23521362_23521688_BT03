#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int TanSuat(int[], int, int);
int DemGiaTri(int[], int, int[], int);

int main()
{
	int c[100];
	int d[100];
	int k;
	int l;
	cout << "Nhap mang A: " << endl;
	Nhap(c, k);
	cout << "Mang A: ";
	Xuat(c, k);

	cout << "\n\nNhap mang B: " << endl;
	Nhap(d, l);
	cout << "Mang B: ";
	Xuat(d, l);

	cout << "\nSo luong gia tri chi xuat hien mot trong 2 mang: " << DemGiaTri(c, k, d, l);
	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}


int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

int DemGiaTri(int a[], int n, int b[], int m)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (a[i] == a[j])
				flag = 0;
		if (TanSuat(b, m, a[i]) == 0 && flag == 1)
			dem++;
	}

	for (int i = 0; i <= m - 1; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (b[j] == b[i])
				flag = 0;
		if (TanSuat(a, n, b[i]) == 0 && flag == 1)
			dem++;
	}
	return dem;
}