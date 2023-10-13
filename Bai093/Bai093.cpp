#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktDang2m(int);
int TimGiaTri(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau:\n";
	Xuat(b, k);

	if (TimGiaTri(b, k) != 0)
		cout << "\nGia tri dau tien trong mang co dang 2^m: " << TimGiaTri(b, k);
	else
		cout << "\nMang khong co gia tri dang 2^m";
	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 201 - 100;
}

void Xuat(int a[], int n)
{
	cout << n << endl;
	for (int i = 0; i < n; i++)
		cout << setw(10) << a[i];
}

bool ktDang2m(int n)
{
	if (n < 1)
		return false;
	bool flag = true;
	int t = abs(n);
	while (t > 1)
	{
		int du = t % 2;
		if (du != 0)
			flag = false;
		t /= 2;
	}
	return flag;
}

int TimGiaTri(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktDang2m(a[i]))
			return a[i];
	return 0;
}
