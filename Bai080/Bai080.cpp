#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void AmDau(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	AmDau(b, k);

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

void AmDau(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
		{
			cout << "\nGia tri Am dau: ";
			cout << fixed << setw(10) << setprecision(3) << a[i];
			return;
		}
	if (dem == 0)
		cout << "Khong co gia tri am trong mang: ";
	return;
}