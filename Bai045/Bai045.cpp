#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TongDuong(float[], int);
int DemDuong(float[], int);
float TrungBinhCong(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	cout << "\nTrung binh cong cac gia tri thoa dieu kien: " << TrungBinhCong(b, k);
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

float TongDuong(float a[], int n)
{
	float s = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > 0)
			s += a[i];
	return s;
}

int DemDuong(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > 0)
			dem++;
	return dem;
}

float TrungBinhCong(float a[], int n)
{
	float s = TongDuong(a, n);
	int dem = DemDuong(a, n);
	if (dem == 0)
		return 0;
	return s / dem;
}