#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;

void Nhap(string, int[], int&);
void Xuat(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap("intdata01.inp", b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(string filename , int a[], int& n)
{
	ifstream fi(filename);
	fi >> n;
	for (int i = 0; i <= n - 1; i++)
		fi >> a[i];
}

void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}