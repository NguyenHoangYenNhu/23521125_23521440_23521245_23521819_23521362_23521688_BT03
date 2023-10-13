#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool Vitrile(int);
int Sapxep(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	if (Sapxep(b, k) == 0)
		cout << "Mang khong ton tai gia tri khong";
	else
		cout << "Mang ton tai";
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

int Sapxep(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] == 0)
			return 1;
		else
			return 0;
}
