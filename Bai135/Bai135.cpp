#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XayDung(float[], int, float[]);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	float c[100];
	XayDung(b, k, c);

	cout << "\nMang sau khi xu ly: ";
	Xuat(c, k);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}

void XayDung(float a[], int n, float b[])
{
	if (n == 1)
	{
		b[0] = 0;
		return;
	}
	b[0] = a[1];
	for (int i = 1; i < n - 1; i++)
		b[i] = a[i - 1] + a[i + 1];
	b[n - 1] = a[n - 2];
}