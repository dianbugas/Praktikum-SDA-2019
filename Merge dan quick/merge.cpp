#include <iostream>
using namespace std;

void menggabungkanArray(int n1[], int n2[]){
	int i,j,j3;
	int t3[6];
	int j1=3;
	int j2=3;
	i=0;
	j=0;
	j3=0;
	while ((i<j1) && (j<j2)){
		cout<<"nilai 1 "<<i<<":"<<n1[i]<<endl;
		cout<<"nilai 2 "<<j<<":"<<n2[j]<<endl;

		if(n1[i] < n2[j]){
			t3[j3] = n1[i];
			i = i+1;
		}else{
			t3[j3] =n2[j];
			j=j+1;
		}

		j3 = j3 + 1;
	}
	if(i>=j1){
		i=j;
		while(i<j2){

			t3[j3] = n2[i];
			i=i+1;
			j3 = j3+1;
		}
	}else{
		j=i;
		while(j<j1){

			t3[j3]=n1[j];
			j=j+1;
			j3=j3+1;
		}
	}

	//menampilkan isi j3
	for(int i=0; i<6; i++){
		cout<<t3[i]<<",";
	}
	//return t3;
}

int main()
{
	int n1[] ={1,9,7};
	int n2[] = {2,4,3};
	int t3[6];
	menggabungkanArray(n1, n2);
}
/*
Codingan nya error, ini ngikutin di elen;
*/
