#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Lietke(float[], int);

int main()
{
	int n;
	float a[500];
	Nhap(a, n);
	cout << "So duong: ";
	Lietke(a, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
void Lietke(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			cout << setw(8) << setprecision(5) << a[i];
}