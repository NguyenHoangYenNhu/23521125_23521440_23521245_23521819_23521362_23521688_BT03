#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktChinhPhuong(int);
void LietKe(int[], int n);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	LietKe(b, k);

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

bool ktChinhPhuong(int n)
{
	for (int i = 0; i <= n; i++)
		if (i * i == n)
			return true;
	return false;
}

void LietKe(int a[], int n)
{
	cout << "\nVi tri cua so chinh phuong: ";
	for (int i = 0; i < n; i++)
		if (ktChinhPhuong(a[i]))
			cout << setw(10) << i;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}