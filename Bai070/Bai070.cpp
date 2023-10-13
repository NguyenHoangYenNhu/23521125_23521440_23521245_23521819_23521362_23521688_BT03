#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int TanSuat(int[], int, int);
void LietKe(int[], int, int[], int);

int main()
{
	int c[100];
	int k;
	Nhap(c, k);

	cout << "Mang a ban dau: \n";
	Xuat(c, k);

	int d[100];
	int l;
	Nhap(d, l);

	cout << "Mang b ban dau: \n";
	Xuat(d, l);

	LietKe(c, k, d, l);
	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "\nNhap n: \n";
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
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

void LietKe(int a[], int n, int b[], int m)
{
	cout << "\nCac gia tri chi xuat hien mot trong hai mang: ";
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j < i; j++)
			if (a[i] == a[j])
				flag = 0;
		if (TanSuat(b, m, a[i]) == 0 && flag)
			cout << setw(10) << a[i];
	}
	for (int i = 0; i < m; i++)
	{
		int flag = 1;
		for (int j = 0; j < i; j++)
			if (b[i] == b[j])
				flag = 0;
		if (TanSuat(a, n, b[i]) == 0 && flag)
			cout << setw(10) << b[i];
	}
}