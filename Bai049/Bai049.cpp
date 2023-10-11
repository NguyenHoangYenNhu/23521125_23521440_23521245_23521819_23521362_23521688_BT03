#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TrungBinh(float[], int);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);

	cout << "\nXuat mang mot chieu: ";
	Xuat(a, n);

	cout << "\nKhoang cach trung binh giua cac cap so: ";
	cout << TrungBinh(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n : ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
	cout << n << endl;
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}

float TrungBinh(float a[], int n)
{
	float s = 0;
	int dem = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i != j)
			{
				s = s + abs(a[i] - a[j]);
				dem++;
			}
	if (dem == 0)
		return 0;
	return s / dem;
}
