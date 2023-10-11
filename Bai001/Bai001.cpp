#include <iostream>
#include <cmath>

using namespace std;

void Nhap(float[], int&);
float Dem(float[], int);

int main()
{
	int n;
	float a[500];
	Nhap(a, n);
	cout << "s= " << Dem(a, n);
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

float Dem(float a[], int n)
{
	float s = 0;
	if (n == 1)
		s += a[0];
	for (int i = 0; i < n; i++)
		if (a[i] < a[i + 1] && a[i] < a[i - 1])
			s = s + a[i];
	if (a[0] < a[1])
		s = s + a[0];
	if (a[n - 1] < a[n - 2])
		s = s + a[n - 1];
	return s;
}
