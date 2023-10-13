#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int DemCucDai(float[], int);
int DemCucTieu(float[], int);
int DemCucTri(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	cout << "\nSo luong gia tri thoa dieu kien: " << DemCucTri(b, k);
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

int DemCucDai(float a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	if (a[0] > a[1])
		dem = dem + 1;
	for (int i = 1; i <= n - 2; i++)
		if (a[i] > a[i + 1] && a[i] > a[i - 1])
			dem = dem + 1;
	if (a[n - 1] > a[n - 2])
		dem = dem + 1;
	return dem;
}

int DemCucTieu(float a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	if (a[0] < a[1])
		dem = dem + 1;
	for (int i = 1; i <= n - 2; i++)
		if (a[i] < a[i + 1] && a[i] < a[i - 1])
			dem = dem + 1;
	if (a[n - 1] < a[n - 2])
		dem = dem + 1;
	return dem;
}

int DemCucTri(float a[], int n)
{
	int dem1 = DemCucDai(a, n);
	int dem2 = DemCucTieu(a, n);
	return (dem1 + dem2);
}
