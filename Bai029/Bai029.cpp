#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ChanDau(int[], int);
int ChanLonNhat(int[], int);
void LietKe(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	LietKe(b, k);
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

int ChanDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			return a[i];
	return -1;
}

int ChanLonNhat(int a[], int n)
{
	int lc = ChanDau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0 && a[i] > lc)
			lc = a[i];
	return lc;
}

void LietKe(int a[], int n)
{
	int lc = ChanLonNhat(a, n);
	if (lc == -1)
	{
		cout << "Khong co gia tri chan ";
		return;
	}
	cout << "\nCac vi tri co gia tri bang gia tri chan lon nhat: ";
	for (int i = 0; i < n; i++)
		if (a[i] == lc)
			cout << setw(10) << i;
}
