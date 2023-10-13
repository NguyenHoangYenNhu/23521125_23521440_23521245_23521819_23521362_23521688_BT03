#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XuatTuongQuan(int[], int);
int DemChan(int[], int);
int DemLe(int[], int);
int TuongQuanChanLe(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	cout << "\nSu tuong quan giua so luong so chan va so le: ";
	XuatTuongQuan(b, k);
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

void XuatTuongQuan(int a[], int n)
{
	if (TuongQuanChanLe(a, n) == -1)
		cout << "So luong so chan nhieu hon so luong so le";
	else 
		if (TuongQuanChanLe(a,n) == 1)
			cout << "So luong so chan it hon so luong so le";
	else
		cout << "So luong so chan bang so luong so le";
}

int DemChan(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n; i++)
		if (a[i] % 2 == 0)
			dem++;
	return dem;
}

int DemLe(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n; i++)
		if (a[i] % 2 != 0)
			dem++;
	return dem;
}

int TuongQuanChanLe(int a[], int n)
{
	int x = DemChan(a, n);
	int y = DemLe(a, n);
	if (x > y)
		return -1;
	if (x < y)
		return 1;
	return 0;
}