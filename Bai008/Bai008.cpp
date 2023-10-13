#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ChuSoDau(int);
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

int ChuSoDau(int n)
{
	int dt = abs(n);
	while (dt >= 10)
		dt = dt / 10;
	return dt;
}
void LietKe(int a[], int n)
{
	cout << "\nCac so co chu so dau tien la le: ";
	for (int i = 0; i < n; i++)
		if (ChuSoDau(a[i]) % 2 != 0)
			cout << a[i] << setw(10);
}

void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}