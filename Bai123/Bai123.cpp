#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktDoiXung(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	if (ktDoiXung(b, k) == 1)
		cout << "Cac so nguyen trong mang doi xung nhau";
	else
		cout << "Cac so nguyen trong mang khong doi xung nhau";
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

int ktDoiXung(int a[], int n)
{
	int flag = 1;
	int i = 0;
	int k = n - 1;
	while (i < k)
	{
		if (a[i] != a[k])
			flag = 0;
		i++;
		k--;
	}
	return flag;
}
