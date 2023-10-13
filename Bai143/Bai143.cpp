#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XuatHoanVi(int[], int, int[], int);
void SapTang(int[], int);
int ktHoanVi(int[], int, int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang a ban dau:";
	Xuat(b, k);

	int c[100];
	int l;
	Nhap(c, l);

	cout << "\nMang b ban dau: ";
	Xuat(c, l);

	cout << "\nKet qua sau khi kiem tra hai mang: ";
	XuatHoanVi(b, k, c, l);
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

void XuatHoanVi(int a[], int n, int b[], int m)
{
	int lc = ktHoanVi(a, n, b, m);
	if (lc == 0)
		cout << "Hai mang khong phai la hoan vi cua nhau";
	else
		cout << "Hai mang la hoan vi cua nhau";
}

void SapTang(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] > a[j])
				swap(a[i], a[j]);
}

int ktHoanVi(int a[], int n, int b[], int m)
{
	if (m != n)
		return 0;
	SapTang(a, n);
	SapTang(b, m);
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (a[i] != b[i])
			flag = 0;
	return flag;
}
