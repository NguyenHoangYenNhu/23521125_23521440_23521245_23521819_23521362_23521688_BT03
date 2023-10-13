#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TongCucDai(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	cout << "\nTong cac gia tri thoa dieu kien: " << TongCucDai(b, k);
	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= (n - 1); i++)
		a[i] = -100 + rand() / ((float)RAND_MAX / 200);
}

void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << fixed << setw(10) << setprecision(3) << a[i];
}

float TongCucDai(float a[], int n)
{
	if (n <= 1)
		return 0;

	float s = 0;
	if (a[0] > a[1])
		s += a[0];
	for (int i = 1; i <= n - 2; i++)
		if ((a[i] > a[i - 1]) && (a[i] > a[i + 1]))
			s = s + a[i];
	if (a[n - 1] > a[n - 2])
		s = s + a[n - 1];
	return s;
}