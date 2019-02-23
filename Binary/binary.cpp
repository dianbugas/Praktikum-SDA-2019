#include <iostream>
using namespace std;

int funcbinary (int data[], int n, int k)
{
	int atas,bawah,tengah,posisi;
	bool ada;

	ada    = false;
 	bawah  = 0;
 	atas   = n - 1;
 	posisi = -1;

 	while (bawah <= atas)
	{
  		tengah = (atas + bawah) / 2;
  		if (k == data[tengah])
  	{
   		posisi = tengah;
   		break;
  	}
 	else if (k < data[tengah]) atas = tengah - 1;
 	else if (k > data[tengah]) bawah= tengah + 1;
 	}
 return posisi;
}

int main ()
{
 	int kk;
 	cout << "INPUT ANGKA : "; cin >> kk;
 	int n = 10;
 	int data[10] = {21,31,48,52,64,78,87,92,105,170};
 	int k = kk;
 	int posisi = funcbinary (data,n,k);

 	if (posisi != -1)
 	{
  		cout << "ANGKA " << k << " ditemukan pada indeks ke-" << posisi << endl;
 	} else {
  		cout << "ANGKA " << k << " tidak ditemukan" << endl;
 		}
 return 0;
}
