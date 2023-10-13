#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ucln(int, int);
int TimUCLN(int[], int);

int main()
{
	int k;
	int b[100];

	Nhap(b, k);
	cout << "Nhap mang: ";
	TimUCLN(b, k);

	Xuat(b, k);
	cout << "\nKet qua: " << TimUCLN(b, k);
	cout << "\n\n\nKet thuc: ";
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

int ucln(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return (a + b);
}

int TimUCLN(int a[], int n)
{
	int lc = a[0];
	for (int i = 0;i < n;i++)
		lc = ucln(lc, a[i]);
	return lc;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}