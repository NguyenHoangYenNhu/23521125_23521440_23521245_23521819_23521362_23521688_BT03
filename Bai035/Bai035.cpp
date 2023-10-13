#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int HangChuc(int);
int TongGiaTri(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	cout << "\nTong cac gia tri thoa dieu kien: " << TongGiaTri(b, k);
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

int HangChuc(int nn)
{
	int t = abs(nn);
	return (t / 10) % 10;
}

int TongGiaTri(int a[], int n)
{
	int s = 0;
	for (int i = 0; i <= (n - 1); i++)
		if (HangChuc(a[i]) == 5)
			s = s + a[i];
	return s;
}
