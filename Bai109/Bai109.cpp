#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ucln(int, int);
int bcnn(int, int);
int TimBCNN(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);

	cout << "\nXuat mang mot chieu: " << endl;
	Xuat(b, k);

	cout << "\nBoi chung nho nhat cua cac gia tri trong mang: " << TimBCNN(b, k);
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

int bcnn(int a, int b)
{
	return abs(a * b) / ucln(a, b);
}

int TimBCNN(int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i < n; i++)
		lc = bcnn(lc, a[i]);
	return lc;
}