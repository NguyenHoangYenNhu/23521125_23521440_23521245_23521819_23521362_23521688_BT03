#include <iostream>
using namespace std;

void nhap(int[], int& n);
bool nguyento(int n);
int xuly(int[], int n);

int main()
{
	int n;
	int a[500];
	nhap(a, n);
	cout << xuly(a, n);
	return 0;
}

void nhap(int a[], int& n)
{
	cout << "Nhap so luong phan tu trong mang: ";
	cin >> n;
	cout << "Nhap cac phan tu trong mang: \n";
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "]:";
		cin >> a[i];
	}
}

bool nguyento(int n)
{
	int t = n;
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (t % i == 0)
			dem++;
	}
	if (dem == 2)
		return true;
	else
		return false;
}

int xuly(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (nguyento(a[i]))
			dem++;
	cout << "So luong so nguyen to trong mang la: ";
	return dem;
}
