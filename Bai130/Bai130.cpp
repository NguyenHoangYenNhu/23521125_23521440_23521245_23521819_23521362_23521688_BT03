#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int TanSuat(int[], int, int);
int ktThuoc(int[], int, int[], int);

int main()
{
	int k;
	int c[100];
	Nhap(c, k);
	cout << "\nMang a ban dau: \n";
	Xuat(c, k);

	int f;
	int e[100];
	Nhap(e, f);
	cout << "\nMang b ban dau: \n";
	Xuat(e, f);

	if (ktThuoc(c, k, e, f))
		cout << "\nTat ca phan tu mang a nam trong mang b.";
	else
		cout << "\nTat ca phan tu mang a ko nam trong mang b.";
	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "\nNhap n: ";
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

int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

int ktThuoc(int a[], int n, int b[], int m)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (TanSuat(b, m, a[i]) == 0)
			flag = 0;
	return flag;
}