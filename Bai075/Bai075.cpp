#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
float XaNhat(float[], int, float);
void Xuat(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	float x;
	cout << "\nNhap x: ";
	cin >> x;

	cout << "\nKet qua: " << XaNhat(b, k, x);
	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "\nNhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
		a[i] = -100 + rand() / ((float)RAND_MAX / 200);
}

float XaNhat(float a[], int n, float xx)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (abs(a[i] - xx) > abs(lc - xx))
			lc = a[i];
	return lc;
}

void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << fixed << setw(10) << setprecision(3) << a[i];
}