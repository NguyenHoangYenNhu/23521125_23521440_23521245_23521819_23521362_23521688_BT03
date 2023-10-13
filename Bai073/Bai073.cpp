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
	cout << "Nho nhat la: " << Dem(a, n);
	return 0;
}
void Nhap(float a[], int& n)
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

float Dem(float a[], int n)
{
	float nn = a[0];
	for (int i = 0; i < n; i++)
		if (nn > a[i])
			nn = a[i];
	return nn;
}
