#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XuatMangCon(int[], int, int, int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	int l;
	cout << "Nhap do dai:";
	cin >> l;

	int vt;
	cout << "Nhap vi tri bat dau:";
	cin >> vt;

	cout << "\nMang con bat dau tu vi tri " << vt << " ,co do dai " << l << ":";
	XuatMangCon(b, k, l, vt);
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

void XuatMangCon(int a[], int n, int ll, int vtt)
{
	for (int i = vtt;i < ll + vtt;i++)
		cout << setw(10) << a[i];
}
