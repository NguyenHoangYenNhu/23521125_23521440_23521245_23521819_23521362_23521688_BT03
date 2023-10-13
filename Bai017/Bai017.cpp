#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void Nhap(float[], int&);
void LietKe(float[], int);
int main()
{
	int n;
	float a[100];
	Nhap(a, n);
	LietKe(a, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]";
		cin >> a[i];
	}
}
void LietKe(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		if (a[i] < 0)
			cout << setw(8) << setprecision(5) << a[i];
	}
}
