#include <iostream>
#include <cmath>

using namespace std;

void Nhap(int[], int&);
void Sapxep(int[], int);
void Xuat(int[], int);

int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	Sapxep(a, n);
	cout << "Mang sau sap xep : ";
	Xuat(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "] = ";
		cin >> a[i];
	}
}

void Sapxep(int a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (i % 2 != 0 && j % 2 != 0 && a[i] > a[j])
				swap(a[i], a[j]);

}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}