#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TongCon(float[], int, int, int);
int ktCon(float[], int, int, int);
int ViTriDuongDau(float[], int);
void DuongLonNhat(float[], int, int&, int&);
void LietKe(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	int x, y;
	cout << "\nMang con thoa dieu kien: ";
	LietKe(b, k);
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
	int s = 0;
	for (int i = 0; i < l; i++)
		s += a[vt + i];
	return s;
}

int ktCon(float a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i < l; i++)
		if (a[vt + i] <= 0)
			flag = 0;
	return flag;
}

int ViTriDuongDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			return i;
	return -1;
}

void DuongLonNhat(float a[], int n, int& vtd, int& vtc)
{
	int vt = ViTriDuongDau(a, n);
	if (vt == -1)
	{
		vtd = vtc = -1;
		return;
	}

	int smax = a[vt];
	vtd = vtc = vt;
	for (int l = 1; l <= n; l++)
		for (int vt = 0; vt <= n - 1; vt++)
			if (ktCon(a, n, vt, l) == 1 && TongCon(a, n, vt, l) > smax)
			{
				vtd = vt;
				vtc = vt + l - 1;
				smax = TongCon(a, n, vt, l);
			}
}

void LietKe(float a[], int n)
{
	int vtd, vtc;
	DuongLonNhat(a, n, vtd, vtc);
	cout << "Mang con co tong duong lon nhat la: ";
	for (int i = vtd; i <= vtc; i++)
		cout << fixed << setw(10) << setprecision(3) << a[i];
}
