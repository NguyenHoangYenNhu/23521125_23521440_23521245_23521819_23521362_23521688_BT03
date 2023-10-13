#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void TimCon(int[], int, int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);

	cout << "\nXuat mang mot chieu: " << endl;
	Xuat(b, k);

	for (int i = 1; i <= k - 1; i++)
	{
		cout << "\nMang con co do dai " << i << " :" << endl;
		TimCon(b, k, i);
	}
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

void TimCon(int a[], int n, int i)
{
	for (int j = 0; j <= n - i; j++)
	{
		int vt = 0;
		while (vt < i)
		{
			cout << setw(10) << a[j + vt];
			vt++;
		}
		cout << endl;
	}
}
