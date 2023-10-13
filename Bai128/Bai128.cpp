#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int ktBang(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	if (ktBang(b, k) == 1)
		cout << "\nCac phan tu trong mang bang nhau";
	else
		cout << "\nCac phan tu trong mang khong bang nhau";

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= (n - 1); i++)
		a[i] = -100 + rand() / ((float)RAND_MAX / 200);
}

void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << fixed << setw(10) << setprecision(3) << a[i];
}

int ktBang(float a[], int n)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (a[i] != a[0])
			flag = 0;
	return flag;
}
