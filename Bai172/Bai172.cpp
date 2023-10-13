#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;

void NhapTang(float[], int&);
void Xuat(float[], int&);

int main()
{
	float b[500];
	int k;
	NhapTang(b, k);

	cout << "Mang duoc sap xep tang dan: \n";
	Xuat(b, k);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void NhapTang(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= (n - 1); i++)
	{
		a[i] = -100 + rand() / ((float)(RAND_MAX) / 200.0);
		int x = a[i];
		int j;
		for (j = i - 1; j >= 0 && a[j] > x; j--)
			a[j + 1] = a[j];
		a[j + 1] = x;
	}
}

void Xuat(float a[], int& n)
{
	for (int i = 0; i < n; i++)
		cout << fixed << setw(10) << setprecision(3) << a[i];
}
