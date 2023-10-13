#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ViTriDau(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	if (ViTriDau(b, k) == -1)
		cout << "\nMang khong co gia tri chan";
	else
		cout << "\nVi tri chan dau tien:" << ViTriDau(b, k);
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

int ViTriDau(int a[], int n)
{
	for (int i = 0;i < n;i++)
		if (a[i] % 2 == 0)
			return i;
	return -1;
}
