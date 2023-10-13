#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int&, int&);
void ChanTang(int[], int);
void LeTang(int[], int);
void ChanTangLeTang(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	ChanTangLeTang(b, k);
	cout << "\nMang sau xu ly: ";
	Xuat(b, k);
	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}

void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

void ChanTang(int a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] % 2 == 0 && a[j] % 2 == 0 && a[i] > a[j])
				HoanVi(a[i], a[j]);
}

void LeTang(int a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] % 2 != 0 && a[j] % 2 != 0 && a[i] > a[j])
				HoanVi(a[i], a[j]);
}

void ChanTangLeTang(int a[], int n)
{
	ChanTang(a, n);
	LeTang(a, n);
}