#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float [], int);
void LietKe(float[], int, int, int);

int main()
{
	float b[100];
	int k, x, y;
	Nhap(b, k);

	cout << "\nNhap x: ";
	cin >> x;
	cout << "\nNhap y: ";
	cin >> y;

	cout << "Mang ban dau: ";
	Xuat(b, k);

	cout << "\nCac phan tu nam trong[" << x << " " << y << "]: ";
	LietKe(b, k, x, y);

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

void LietKe(float a[], int n, int x, int y)
{
	for (int i = 0; i < n; i++)
		if (a[i] >= x && a[i] <= y)
			cout << setw(10) << a[i];
}

void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << fixed << setw(10) << setprecision(3) << a[i];
}