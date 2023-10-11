#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
bool ktNguyenTo(int);
void LietKe(int[], int);

int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	LietKe(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap cac phan tu thu cua mang : \n";
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
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
	for (int i = 0; i <= n - 1; i++)
		if (ktNguyenTo(a[i]) == true)
			cout << setw(4) << a[i];
}

