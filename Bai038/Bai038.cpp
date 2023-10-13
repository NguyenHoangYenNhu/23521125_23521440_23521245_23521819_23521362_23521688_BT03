#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ChuSoDau(int);
int TongGiaTri(int[], int);

int main()
{
	int a[500], n;
	Nhap(a, n);

	cout << "\nXuat mang mot chieu: ";
	Xuat(a, n);

	cout << "\nTong nhung gia tri thoa dieu kien: " << TongGiaTri(a, n);

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

int ChuSoDau(int n)
{
	int t = abs(n);
	while (t >= 10)
		t /= 10;
	return t;
}

int TongGiaTri(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (ChuSoDau(a[i]) % 2 != 0)
			s = s + a[i];
	}
	return s;
}