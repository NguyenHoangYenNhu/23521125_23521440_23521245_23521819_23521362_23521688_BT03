#include <iostream>
#include <cmath>

using namespace std;

void Nhapgiam(float[], int&);
void Xuat(float[], int&);

int main()
{
	int n;
	float a[500];
	Nhapgiam(a, n);
	Xuat(a, n);
	return 0;
}

void Nhapgiam(float a[], int& n)
{
	cout << "Nhap n : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
		int x = a[i];
		int j;
		for (j = i - 1; j >= 0 && a[j] < x; j--)
			a[j + 1] = a[j];
		a[j + 1] = x;
	}
}
void Xuat(float a[], int& n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}