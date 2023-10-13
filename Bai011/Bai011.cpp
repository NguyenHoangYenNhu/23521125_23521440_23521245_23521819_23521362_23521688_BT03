#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
bool ktDang3m(int);
void LietKe(int[], int);
void Xuat(int[], int);

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

void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}

bool ktDang3m(int n)
{
	while (n < 1)
		return false;
	bool flag = true;
	int t = n;
	while (t > 1)
	{
		if (t % 3 != 0)
			flag = false;
		t /= 3;
	}
	return flag;
}

void LietKe(int a[], int n)
{
	cout << "\nCac so co dang 3^m la: ";
	for (int i = 0; i <= n - 1; i++)
	{
		if (ktDang3m(a[i]) == true)
			cout << setw(10) << a[i];
	}
}
