#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float ktGiaTri(int, float);
void TimViTri(float[], int, float);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);

	cout << "\nXuat mang mot chieu: " << endl;
	Xuat(b, k);

	int x;
	cout << "\nNhap x: ";
	cin >> x;

	cout << "\nVi tri co gia tri gan x nhat la: ";
	TimViTri(b, k, x);
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

float ktGiaTri(float y, float x)
{
	return abs(x - y);
}

void TimViTri(float a[], int n, float xx)
{
	float lc = ktGiaTri(a[0], xx);
	for (int i = 1; i <= n - 1; i++)
	{
		float dd = ktGiaTri(a[i], xx);
		if (dd < lc)
			lc = dd;
	}

	for (int i = 0; i <= n - 1; i++)
	{
		float dd = ktGiaTri(a[i], xx);
		if (dd == lc)
			cout << setw(10) << i;
	}
}