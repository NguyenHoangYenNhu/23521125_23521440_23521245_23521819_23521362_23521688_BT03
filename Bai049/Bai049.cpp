#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TrungBinh(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	cout << "\nKhoang cach trung binh giua cac cap so: " << TrungBinh(b, k);
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
