#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void HoanVi(float&, float&);
void TangDan(float[], int);
void GiamDan(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	cout << "\nCac so duong cua mang sau khi duoc sap xep: " << endl;
	TangDan(b, k);
	cout << "\nCac so am cua mang sau khi duoc sap xep: " << endl;
	GiamDan(b, k);
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

void HoanVi(float& i, float& j)
{
	float temp = i;
	i = j;
	j = temp;
}


void TangDan(float a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1;j++)
			if (a[i] > 0 && a[j] > 0 && a[i] > a[j])
				HoanVi(a[i], a[j]);
	for (int i = 0; i < n; i++)
		cout << fixed << setw(10) << setprecision(3) << a[i];
}

void GiamDan(float a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1;j <= n - 1;j++)
			if (a[i] < 0 && a[j] < 0 && a[i] < a[j])
				HoanVi(a[i], a[j]);
	for (int i = 0; i < n; i++)
		cout << fixed << setw(10) << setprecision(3) << a[i];
}
