#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktCon(int [], int , int [], int );

int main()
{
	int b[100];
	int k,l;
	Nhap(b, k);

	cout << "\nMang a: ";
	Xuat(b, k);

	int c[100];
	int l;
	Nhap(c, l);

	cout << "\nMang b: ";
	Xuat(c, l);

	if (ktCon(b,k,c,l) == 1)
		cout << "\nMang b la mang con cua mang a";
	else
		cout << "\nMang b khong la mang con";
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
		cout << fixed << setw(10) << setprecision(3) << a[i];
}

int ktCon(int a[], int n, int b[], int m)
{
	if (n > m)
		return 0;
	int flag = 0;
	for (int vt = 0; vt<=m-n;vt++)
	{
		int co = 1;
		for (int i = 0; i < n; i++)
			if (a[i] != b[vt + i])
				co = 0;
		if (co == 1)
			flag = 1;
	}
	return flag;
}
