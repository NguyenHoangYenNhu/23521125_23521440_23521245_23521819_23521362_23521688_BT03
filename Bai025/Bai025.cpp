#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void nhap(float[], int&);
void xuat(float[], int);
void lietke(float[], int);

int main()
{
	float a[500];
	int n;
	nhap(a, n);
	cout << "Mang ban dau la: ";
	xuat(a, n);
	cout << "Ket qua la: ";
	lietke(a, n);
	return 0;
}

void nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]=";
		cin >> a[i];
	}
}

void xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << fixed << setprecision(2) << setw(8) << a[i];
	cout << endl;
}

void lietke(float a[], int n)
{
	if (n == 1)
		return;
	if (a[0] > a[1])
		cout << a[0] << " ";
	for (int i = 1; i <= n - 2; i++)
		if (a[i] > a[i - 1] && a[i] > a[i + 1])
			cout << a[i] << " ";
	if (a[n - 2] < a[n - 1])
		cout << a[n - 1] << " ";
}