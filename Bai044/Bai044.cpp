#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int TongCucTri(int[], int);
int TongCucTieu(int[], int);
int TongCucDai(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	cout << "\nTong cac gia tri thoa dieu kien: " << TongCucTri(b, k);
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

int TongCucDai(int a[], int n)
{
	if (n <= 1)
		return 0;
	int s = 0;
	if (a[0] > a[1])
		s += a[0];
	for (int i = 1; i <= n - 1; i++)
		if (a[i - 1] < a[i] && a[i] > a[i + 1])
			s += a[i];
	if (a[n - 2] < a[n - 1])
		s += a[n - 1];
	return s;
}

int TongCucTieu(int a[], int n)
{
	if (n <= 1)
		return 0;
	int s = 0;
	if (a[0] < a[1])
		s += a[0];
	for (int i = 1; i <= n - 2; i++)
		if (a[i - 1] > a[i] && a[i] < a[i + 1])
			s += a[i];
	if (a[n - 2] > a[n - 1])
		s += a[n - 1];
	return s;
}

int TongCucTri(int a[], int n)
{
	int s1 = TongCucDai(a, n);
	int s2 = TongCucTieu(a, n);
	return (s1 + s2);
}
