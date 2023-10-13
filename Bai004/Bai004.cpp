#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;

void Nhap(string, float[], int&);
void Xuat(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap("floatdata01.inp", b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);
	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(string filename, float a[], int& n)
{
	ifstream fi(filename);
	fi >> n;
	for (int i = 0; i <= n - 1; i++)
		fi >> a[i];
}

void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << fixed << setw(10) << setprecision(3) << a[i];
}