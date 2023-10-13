#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktGiam(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	if (ktGiam(b, k) != 0)
		cout << "Mang giam dan.";
	else
		cout << "Mang khong giam.";
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 201 - 100;
}

void Xuat(int a[], int n)
{
	cout << n << endl;
	for (int i = 0; i < n; i++)
		cout << setw(10) << a[i];
}

int ktGiam(int a[], int n)
{
	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		if (a[i] < a[i + 1])
			flag = 0;
	return flag;
}