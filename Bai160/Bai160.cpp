#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XoaViTri(float[], int&, int);

int main()
{
	float b[100];
	int k;

	Nhap(b, k);

	cout << "\nXuat mang mot chieu: \n";
	Xuat(b, k);

	int l;
	cin >> l;

	cout << "\nKet qua la: ";
	XoaViTri(b, k, l);
	cout << "\n\n\n Ket thuc!!!";

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n : ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
		a[i] = rand() / ((float)(RAND_MAX) / 200);
}

void Xuat(float a[], int n)
{
	cout << n << endl;
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}
void XoaViTri(float a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}