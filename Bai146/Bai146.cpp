#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void Tron(int[], int, int[], int, int[], int&);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	int c[100];
	int l;
	Nhap(c, l);

	cout << "\nMang ban dau: ";
	Xuat(c, l);

	int d[100];
	int j;
	Tron(b, k, c, l, d, j);

	cout << "Mang sau xu ly ";
	Xuat(d, j);
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
		cout << setw(10) << a[i] << endl;
}

void Tron(int aa[], int n, int bb[], int m, int cc[], int& p)
{
	int i = 0;
	int j = 0;
	p = 0;
	while (!(i >= n && j >= m))
	{
		if ((i < n && j < m && aa[i] < bb[j]) || (j > m))
			cc[p++] = aa[i++];
		else
			cc[p++] = bb[j++];
	}
}