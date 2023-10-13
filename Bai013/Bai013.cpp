#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktNguyenTo(int);
void LietKe(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	LietKe(b, k);
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


bool ktNguyenTo(int nn)
{
	int dem = 0;
	for (int i = 1; i <= nn;i++)
		if (nn % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

void LietKe(int a[], int n)
{
	cout << "\nCac so nguyen to la: ";
	for (int i = 0; i <= n - 1; i++)
		if (ktNguyenTo(a[i]) == true)
			cout << setw(10) << a[i];
}

void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}