#include<iostream>
using namespace std;

int main ()
{
	int i, no, satu=0, dua=2, next;
	satu=0;
	dua=1;
	cout << "masukan angka pertama ";
	cin >> no ;
	cout << "fibonaci nya adalah ";

	for (i=0; i<no; i++)
	{
		cout << "\n" << satu;
		next = satu + dua;
		satu = dua;
		dua = next;
	}
	return 0;
}
