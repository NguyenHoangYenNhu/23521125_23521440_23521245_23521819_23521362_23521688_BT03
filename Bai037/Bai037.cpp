#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
bool KtDoiXung(int);
void TongDoiXung(int[], int n);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	TongDoiXung(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	cout << "Nhap mang: \n";
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]=";
		cin >> a[i];
	}
}
bool KtDoiXung(int n)
{
	int t = abs(n);
	int dn = 0;
	while (t != 0)
	{
		dn = dn * 10 + t % 10;
		t /= 10;
	}
	if (dn == abs(n))
		return true;
	return false;
}
void TongDoiXung(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		if (KtDoiXung(a[i]))
			s += a[i];
	cout << "Tong cac phan tu doi xung: " << s;
}