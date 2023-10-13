#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(int[], int&);
void XoaSo(int[], int&, int);
void XoaChan(int[], int&);
void Xuat(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	XoaChan(b, k);

	cout << "\nMang sau khi xoa cac so chan:";
	Xuat(b, k);
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

void XoaSo(int a[], int& n, int k)
{
	for (int i = k;i <= n - 2;i++)
		a[i] = a[i + 1];
	n--;
}

void XoaChan(int a[], int& n)
{
	for (int i = n - 1;i >= 0;i--)
		if (a[i] % 2 == 0)
			XoaSo(a, n, i);
}