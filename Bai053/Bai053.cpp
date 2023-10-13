#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int TanSuat(float[], int, float);

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

	cout << "\nSo lan xuat hien cua gia tri " << x << ": " << TanSuat(b, k, x);
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
		cout << setw(10) << a[i];
}

int TanSuat(float a[], int n, float xx)
{
	int dem = 0;
	for (int i = 0;i < n;i++)
		if (a[i] == xx)
			dem++;
	return dem;
}
