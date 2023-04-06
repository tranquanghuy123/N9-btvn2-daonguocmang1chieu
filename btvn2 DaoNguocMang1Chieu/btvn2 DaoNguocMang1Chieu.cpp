#include <iostream>
using namespace std;
#define MAX 1000

void NhapMang(int a[MAX], int n)
{
	cout << " Nhap so luong phan tu: ";
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}



int main()
{
	int array[MAX];
	int nSize;
	NhapMang(array, nSize);

	return 0;
}