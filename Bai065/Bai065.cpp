#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int DemPhanBiet(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	cout << "\nSo luong gia tri thoa dieu kien: " << DemPhanBiet(b, k);
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

int DemPhanBiet(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		bool flag = true;
		for (int j = 0; j < i; j++)
			if (a[j] == a[i])
				flag = false;
		if (flag == true)
			dem++;
	}
	return dem;
}
