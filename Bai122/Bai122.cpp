#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktToanChan(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	if (ktToanChan(b, k))
		cout << "Mang chua toan gia tri chan";
	else
		cout << "Mang co ton tai gia tri le";
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

int ktToanChan(int a[], int n)
{
	int flag = 1;
	for (int i = 0; i <= n; i++)
		if (a[i] % 2 != 0)
			flag = 0;
	return flag;
}
