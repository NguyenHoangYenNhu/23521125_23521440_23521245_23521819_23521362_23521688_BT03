#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float DauTien(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	if (DauTien(b, k) != 0)
		cout << "\nGia tri dau tien lon hon 2003: " << fixed << setw(10) << setprecision(3) << DauTien(b, k);
	else
		cout << "\nMang khong co gia tri lon hon 2003.";
	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= (n - 1); i++)
		a[i] = -5000 + rand() / ((float)RAND_MAX / 10000);
}

void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << fixed << fixed << setw(10) << setprecision(3) << a[i];
}

float DauTien(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] > 2003)
			return a[i];
	return 0;
}
