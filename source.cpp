#include <iostream>
using namespace std;
int tong(int a, int b);
int hieu(int a, int b);

int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";
	cin >> phepToan;

// hieu
	int hieu(a, b);
	cout<<"hieu là" +hieu;
	// tong
	int tong(a,b);
	cout<<"tong la:" +tong;
	// tich
	int tich(a,b);
	cout<<"tich là:"+tich;
	
	system("pause");
	return 0;
}