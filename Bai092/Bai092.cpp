#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int TimGiaTri(int[], int);
int ChuSoDau(int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	if (TimGiaTri(b, k) != 0)
		cout << "\nGia tri dau tien co chu so dau tien la so le la: " << TimGiaTri(b, k);
	else
		cout << "\nKhong ton tai gia tri co chu so dau tien la so le.";
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

int ChuSoDau(int n)
{
	int t = abs(n);
	while (t >= 10)
		t /= 10;
	return t;
}

int TimGiaTri(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ChuSoDau(a[i]) & 1)
			return a[i];
	return 0;
}