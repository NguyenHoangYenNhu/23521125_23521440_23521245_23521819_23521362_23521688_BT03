#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void DaoMang(float[], int);
void DaoDuong(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	cout << "Cac gia tri cua mang sau sap xep la: ";
	DaoDuong(b, k);
	Xuat(b, k);
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

void DaoMang(float a[], int n)
{
	int d = 0;
	int c = n - 1;
	while (d < c)
	{
		float temp = a[d];
		a[d] = a[c];
		a[c] = temp;
		d++;
		c--;
	}
}

void DaoDuong(float a[], int n)
{
	float b[100];
	int k;
	int k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			b[k++] = a[i];

	DaoMang(a, n);

	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			a[i] = b[k++];
}