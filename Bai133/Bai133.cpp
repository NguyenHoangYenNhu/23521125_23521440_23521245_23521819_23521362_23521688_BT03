#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XayDung(float[], int, float[], int&);

int main()
{
	float A[500], B[500];
	int n, k;

	Nhap(A, n);

	cout << "\nXuat mang ban dau: ";
	Xuat(A, n);

	XayDung(A, n, B, k);

	cout << "\nXuat mang chua gia tri am: ";
	Xuat(B, k);

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}

void XayDung(float a[], int n, float b[], int& k)
{
	k = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] < 0)
			b[k++] = a[i];
}