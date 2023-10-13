#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ChanCuoiCung(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	if (ChanCuoiCung(b, k) != -1)
		cout << "\nGia tri chan cuoi cung:" << ChanCuoiCung(b, k);
	else
		cout << "\nKhong co gia tri chan cuoi";
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

int ChanCuoiCung(int a[], int n)
{
	for (int i = n - 1;i >= 0;i--)
		if (a[i] % 2 == 0)
			return a[i];
	return -1;
}
