#include <iostream>
#include <iomanip>
void Nhap(int[], int&);
void Xuat(int[], int);
void TimCon(int[], int, int, int&);
using namespace std;

int main()
{
	int b[100];
	int k, fl;
	Nhap(b, k);

	cout << "\nXuat mang mot chieu: " << endl;
	Xuat(b, k);

	for (int i = 1; i <= k - 1; i++)
		TimCon(b, k, i, fl);
	if (fl != 1)
		cout << "\nKhong co mang nao thoa dieu kien";
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

void TimCon(int a[], int n, int i, int& flag)
{
	for (int j = 0; j <= n - i; j++)
	{
		int s = 0;
		int vt = 0;
		while (vt < i)
		{
			s = s + a[j + vt];
			vt++;
		}
		if (s == 100)
		{
			flag = 1;
			cout << "\nMang thoa dieu kien: " << endl;
			vt = 0;
			while (vt < i)
			{
				cout << setw(10) << a[j + vt];
				vt++;
			}
			cout << endl;
		}
	}
}

