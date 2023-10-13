#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void ConLonNhat(float[], int, int&, int&);
float TongCon(float[], int, int, int);
void XuatCon(float[], int, int, int);
void XuatCon(float[], int, int);
void XuatCon(float[], int);


int main()
{
	float b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	cout << "\nTat ca mang Con: \n";
	XuatCon(b, k);
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

float TongCon(float a[], int n, int vt, int l)
{
	float s = 0;
	for (int i = 0; i < l; i++)
		s = s + a[vt + i];
	return s;
}

void ConLonNhat(float a[], int n, int& vtd, int& vtc)
{
	vtd = vtc = 0;
	float sln = a[0];
	for (int l = 1; l <= n; l++)
		for (int vt = 0; vt <= n - 1; vt++)
			if (TongCon(a, n, vt, l) > sln)
			{
				vtd = vt;
				vtc = vt + l - 1;
				sln = TongCon(a, n, vt, l);
			}
}

void XuatCon(float a[], int n, int vt, int l)
{
	for (int i = 0; i <= l - 1; i++)
		cout << setw(8) << a[vt + i];
}

void XuatCon(float a[], int n, int l)
{
	for (int vt = 0; vt <= n - l; vt++)
	{
		cout << endl;
		XuatCon(a, n, vt, l);
	}
}

void XuatCon(float a[], int n)
{
	for (int l = 1; l <= n; l++)
		XuatCon(a, n, l);
}