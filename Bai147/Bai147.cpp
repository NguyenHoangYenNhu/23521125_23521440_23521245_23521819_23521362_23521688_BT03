#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void Tron(int[], int, int[], int, int[], int&);
void Xuat(int[], int);

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

void Tron(int a[], int n, int b[], int m, int c[], int& p)
{
	int i = n-1;
	int j = m-1;
	p = 0;
	while (i >= 0 || j >= 0)
	{
		if ((a[i] > b[j] && i >= 0 && j >= 0) || j < 0)
		{
			c[p++] = a[i--];
		}
		else
		{
			c[p++] = b[j--];
		}
	}
}