#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TongCucTieu(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	cout << "\nTong cac gia tri thoa dieu kien: " << TongCucTieu(b, k);
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

float TongCucTieu(float a[], int n)
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
