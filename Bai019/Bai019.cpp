#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float NhoNhat(float[], int);
void LietKe(float[], int);

int main()
{
	float b[10000];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	LietKe(b, k);
	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= (n - 1); i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << fixed << setw(10) << setprecision(3) << a[i];
}

float NhoNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0;i < n;i++)
		if (a[i] < lc)
			lc = a[i];
	return lc;
}

void LietKe(float a[], int n)
{
	cout << "\nCac vi tri nho nhat: ";
	float lc = NhoNhat(a, n);
	for (int i = 0; i < n; i++)
		if (a[i] == lc)
			cout << i;
}
