#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int&, int&);
void Sapgiam(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang b: ";
	Xuat(b, k);

	cout << "\nXay dung cac gia tri trong mang giam dan: \n";
	Sapgiam(b, k);
	Xuat(b, k);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << setprecision(3) << a[i];
}

void HoanVi(int& x, int& y)
{
	float temp = x;
	x = y;
	y = temp;
}

void Sapgiam(int a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] < a[j])
				HoanVi(a[i], a[j]);
}