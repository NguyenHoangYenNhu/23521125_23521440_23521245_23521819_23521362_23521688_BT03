#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void SapTang(float[], int);
void ThemBaoToan(float[], int&, float);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	SapTang(b, k);
	cout << "\nSap tang: \n";
	Xuat(b, k);

	float y;
	cout << "\nNhap y: ";
	cin >> y;

	cout << "\nMang sau xu ly " << y << " la: ";
	ThemBaoToan(b, k, y);
	Xuat(b, k);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100 + rand() / ((float)RAND_MAX / 200);
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << a[i];
}

void SapTang(float a[], int n)
{
	for (int i = 1; i <= n - 1; i++)
		for (int j = 0; j <= n - 2; j++)
			if (a[i] < a[j])
				swap(a[j], a[i]);
}

void ThemBaoToan(float a[], int& n, float x)
{
	int i = n - 1;
	while (i >= 0 && a[i] > x)
	{
		a[i + 1] = a[i];
		i--;
	}
	a[i + 1] = x;
}