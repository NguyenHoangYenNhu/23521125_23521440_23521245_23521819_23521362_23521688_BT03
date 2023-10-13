#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktToanLe(int);
void LietKe(int[], int);

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

bool ktToanLe(int n)
{
	if (n == 0)
		return false;
	bool flag = true;
	int t = abs(n);
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = false;
		t = t / 10;
	}
	return flag;
}

void LietKe(int a[], int n)
{
	cout << "\nCac so toan le la:";
	for (int i = 0; i < n; i++)
		if (ktToanLe(a[i]))
			cout << setw(8) << a[i];
}

void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}
