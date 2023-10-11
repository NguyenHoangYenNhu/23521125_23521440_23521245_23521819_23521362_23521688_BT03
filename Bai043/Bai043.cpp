#include <iostream>
void nhap(float[], int&);
float TongCucDai(float[], int);
using namespace std;

int main()
{
	float a[100];
	int n;
	nhap(a, n);
	cout << "Tong cac so lon hon so xung quanh la:" << TongCucDai(a, n);
	return 0;
}

void nhap(float a[], int& n)
{
	cout << "Nhap so luong phan tu mang:";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "]:";
		cin >> a[i];
	}
}

float TongCucDai(float a[], int n)
{
	float s = 0;
	if (a[0] > a[1])
		s = s + a[0];
	for (int i = 1; i <= n - 2; i++)
		if ((a[i] > a[i - 1]) && (a[i] > a[i + 1]))
			s = s + a[i];
	if (a[n - 1] > a[n - 2])
		s = s + a[n - 1];
	return s;
}