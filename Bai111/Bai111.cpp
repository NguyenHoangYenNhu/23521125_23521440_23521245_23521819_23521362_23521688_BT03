#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktToanChan(int[], int);
int LeNhoNhat(int[], int);
int ChanLonNhat(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	cout << "\nGia tri thoa dieu kien: " << ChanLonNhat(b, k);
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
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 != 0)
			return a[i];
	
	return 0;
}

int LeNhoNhat(int a[], int n)
{
	int lc = ktToanChan(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 != 0 && lc > a[i])
			lc = a[i];

	return lc;
}

int ChanLonNhat(int a[], int n)
{
	int lc = LeNhoNhat(a, n);
	if (lc == 0)
		return -1;
	return lc - 1;
}