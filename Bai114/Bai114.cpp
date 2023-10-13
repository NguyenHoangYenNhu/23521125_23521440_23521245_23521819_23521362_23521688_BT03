#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int TimChuSo(int[], int);
int ViTriDuongDau(int[], int);
int ViTriDuongNhoNhat(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	cout << "\nChu so xuat hien it nhat: " << TimChuSo(b, k);
	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}

int TimChuSo(int a[], int n)
{
	int dem[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
			dem[0]++;
		int t = abs(a[i]);
		while (t != 0)
		{
			int dv = t % 10;
			dem[dv]++;
			t = t / 10;
		}
	}
	return ViTriDuongNhoNhat(dem, 10);
}

int ViTriDuongDau(int dem[], int n)
{
	for (int i = 0; i < n; i++)
		if (dem[i] > 0)
			return i;
	return -1;
}

int ViTriDuongNhoNhat(int a[], int n)
{
	int lc = ViTriDuongDau(a, 10);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n; i++)
		if (a[i] < a[lc] && a[i] > 0)
			lc = i;
	return lc;
}