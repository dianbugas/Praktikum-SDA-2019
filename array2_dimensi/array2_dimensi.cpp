#include <iostream>
using namespace std;

int main(){

     // Deklarasi dan inisialisasi array dua dimensi
     // Dengan jumlah elemen baris = 3
     // dan jumlah elemen kolom = 2
     int matrikcontoh [3][2] = {{1,2},{3,4},{5,6}};

     // Mendeklarasi variabel untuk
     // Indeks perulangan
     int i,j;

     // Menampilkan matrikcontoh
     cout<<"\nMenampilkan matrik \n";
     for(i=0;i<3;i++){
          for(j=0;j<2;j++){
               cout<<matrikcontoh[i][j]<<" ";
          }
          cout<<endl;
     }
     return 0;
}
