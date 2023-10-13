#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int DemMang(int[], int, int[], int);
int main()
{
	int c[100];
	int k;
	Nhap(c, k);

	cout << "\nMang a ban dau: \n";
	Xuat(c, k);

	int d[100];
	int l;
	Nhap(d, l);

	cout << "\nMang b ban dau:\n";
	Xuat(d, l);

	cout << "\nSo lan xuat hien cua mang a trong mang b :" << DemMang(c, k, d, l);
	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "\nNhap n: ";
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

int DemMang(int a[], int n, int b[], int m)
{
	if (n > m)
		return 0;
	int dem = 0;
	for (int i = 0; i <= m - n; i++)
	{
		int flag = 1;
		for (int j = 0; j < n; j++)
			if (a[j] != b[i + j])
				flag = 0;
		if (flag == 1)
			dem++;
	}
	return dem;
}