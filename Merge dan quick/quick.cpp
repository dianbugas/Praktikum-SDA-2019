#include<iostream>
using namespace std;

void quicksort( int arr[], int left, int right)
{
	int i=left, j=right;
	int tmp;
	int pivot=arr[(left+right)/2];

	while(i<=j)
	{
		while(arr[i]<pivot)
		i++;
		while(arr[j]>pivot)
		j--;
		if(i<=j)
		{
			tmp=arr[i];
			arr[i]=arr[j];
			arr[j]=tmp;
			i++;
			j--;
		}
	}
	if(left<j)
	quicksort(arr,left,j);
	if(i<right)
	quicksort(arr,i,right);
}
int main()
{
	int arr[100];
	int i,d,lb,ub;
	lb=0;

	cout << "masukan banyak data yang akan diurutkan: "; cin >> d;

	ub=d;
	cout << "masukan data-data yang akan diurutkan: \n\n";
	for(i=1; i<=d; i++)
	{
		cout<<"\tdata ke- "<<i<<" : "; cin>>arr[i];
	}
	quicksort(arr,lb,ub);
	cout<<"\nHasil pengurutan data: ";
	for(i=1; i<=d; i++)
	cout<<" "<<arr[i];
	return 0;

}
