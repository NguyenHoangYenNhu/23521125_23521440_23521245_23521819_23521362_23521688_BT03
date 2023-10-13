#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XuatCon(int[], int, int, int);
void XuatCon(int[], int, int);

int main()
{
	int k, z;
	int b[100];

	Nhap(b, k);
	cout << "\nMang ban dau: \n";

	Xuat(b, k);

	cout << "\nNhap do dai l:";
	cin >> z;

	XuatCon(b, k, z);

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
	cout << "Ket qua: ";
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}

void XuatCon(int a[], int n, int l)
{
	for (int vt = 0;vt <= n - l;vt++)
	{
		cout << endl;
		XuatCon(a, n, vt, l);
	}
}

void XuatCon(int a[], int n, int vt, int l)
{
	for (int i = 0; i <= l - 1; i++)
		cout << setw(10) << a[vt + i];
}
