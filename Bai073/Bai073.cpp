#include <iostream>
using namespace std;

int DemSoChan(float[], int);
int DemSoLe(float[], int);
int TuongQuan(float[], int);

int main()
{
	float a[100];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]:";
		cin >> a[i];
	}
	TuongQuan(a, n);
	return 0;
}
int DemSoChan(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n; i++)
		if (a[i] % 2 == 0)
			dem++;
	return dem;
}

int DemSoLe(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n; i++)
		if (a[i] % 2 != 0)
			dem++;
	return dem;
}

int TuongQuan(int a[], int n)
{
	int x = DemSoChan(a, n);
	int y = DemSoLe(a, n);
	if (x > y)
		cout << "So luong so chan nhieu hon ";
	if (x < y)
		cout << "So luong so le nhieu hon";
	return 0;
}