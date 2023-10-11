#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void Nhap(float[], int&);
float NhoNhat(float[], int);
void LietKe(float[], int);
int main()
{
	int n;
	float a[500];
	Nhap(a, n);
	cout << "Vi tri cua gia tri nho nhat trong mang la: ";
	LietKe(a, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	cout << "Nhap cac phan tu trong mang: " << endl;
	for (int i = 0;i < n;i++)
	{
		cout << "A[" << i << "] =";
		cin >> a[i];
	}
}
float NhoNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0;i < n;i++)
		if (a[i] < lc)
			lc = a[i];
	return lc;
}
void LietKe(float a[], int n)
{
	float lc = NhoNhat(a, n);
	for (int i = 0;i < n;i++)
		if (a[i] == lc)
			cout << i << setw(4);
}
