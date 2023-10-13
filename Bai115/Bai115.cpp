#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void GanNhat(float[], int, float&, float&);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau:\n";
	Xuat(b, k);

	float x, y;
	GanNhat(b, k, x, y);
	cout << "\nKhoang cach gan nhat la (" << x << ", " << y << ")";
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100 + rand() / ((float)RAND_MAX / 200);
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << setprecision(3) << a[i];
}

void GanNhat(float a[], int n, float& x, float& y)
{
	x = a[0];
	y = a[1];
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (abs(a[i] - a[j]) < abs(x - y))
			{
				x = a[i];
				y = a[j];
			}
}