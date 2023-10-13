#include <iostream>
using namespace std;

void nhap(int[], int&);
bool ktsohoanthien(int);
int kttinhchat(int[], int);
void xuat(int[], int);

int main()
{
	int n;
	int a[500];
	nhap(a, n);
	xuat(a, n);
	return 0;
}

void nhap(int a[], int& n)
{
	cout << "Nhap vao so phan tu cua mang: ";
	cin >> n;
	cout << "Nhap vao cac phan tu cua mang: ";
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}

bool ktsohoanthien(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			s += i;
	if (s == n)
		return true;
	return false;
}

int kttinhchat(int a[], int n)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (ktsohoanthien(a[i]) && a[i] > 256)
			flag = 0;
	if (flag == 1)
		return 1;
	return 0;
}

void xuat(int a[], int n)
{
	cout << "Mang khong co ton tai so hoan thien lon hon 256: " << kttinhchat(a, n);
}
