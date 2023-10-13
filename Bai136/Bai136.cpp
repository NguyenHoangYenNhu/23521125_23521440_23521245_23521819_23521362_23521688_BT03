#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XayDung(int[], int, int[], int&);
void Xuat(int[], int);

int main()
{
	int c[100];
	int k;
	Nhap(c, k);

	cout << "\nMang ban dau: ";
	Xuat(c, k);

	int d[100];
	int l;
	XayDung(c, k, d, l);

	cout << "\nMang luc sau:";
	Xuat(d, l);
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

void XayDung(int a[], int n, int b[], int& k)
{
	k = 0;
	b[k++] = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] % 2 == 0 && b[k - 1] % 2 == 0)
			b[k++] = 1;
		else if (a[i] % 2 != 0 && b[k - 1] % 2 != 0)
			b[k++] = 0;
		b[k++] = a[i];
	}
}
