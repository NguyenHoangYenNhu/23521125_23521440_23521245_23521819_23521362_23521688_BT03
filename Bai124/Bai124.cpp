#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktChanLe(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	if (ktChanLe(b, k))
		cout << "\nMang co tinh chan le: ";
	else
		cout << "\nMang khong co tinh chan le: ";

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}

int ktChanLe(int a[], int n)
{
	int flag = 1;
	for (int i = 0; i < n - 1; i++)
		if ((a[i] + a[i + 1]) % 2 == 0)
			flag = 0;
	return flag;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << a[i];
}