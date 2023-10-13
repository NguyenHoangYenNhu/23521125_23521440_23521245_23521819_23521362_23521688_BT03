#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TongGiaTri(float[], int, float);
int DemGiaTri(float[], int, float);
float TrungBinhCong(float[], int, float);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	int x;
	cout << "\nNhap x:";
	cin >> x;

	cout << "\nTrung binh cong cac gia tri thoa dieu kien: " << TrungBinhCong(b, k, x);

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

float TongGiaTri(float a[], int n, float xx)
{
	float s = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > xx)
			s = s + a[i];
	return s;
}

int DemGiaTri(float a[], int n, float xx)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > xx)
			dem++;
	return dem;
}

float TrungBinhCong(float a[], int n, float xx)
{
	float s = TongGiaTri(a, n, xx);
	int dem = DemGiaTri(a, n, xx);
	if (dem == 0)
		return 0;
	return s / dem;
}
