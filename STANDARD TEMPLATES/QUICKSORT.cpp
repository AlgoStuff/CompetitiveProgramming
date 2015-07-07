#include<iostream>

using namespace std;


int partition(int a[],int start,int end){
	int curr = start;

	for(int i = start;i<end;i++){
		if(a[i]<a[end]){
			int temp = a[curr];
			a[curr] = a[i];
			a[i] = temp;
			curr++;
		}
	}
	int temp = a[curr];
	a[curr] = a[end];
	a[end] = temp;
	return curr; 
}

void quicksort(int a[], int start, int end){
	if(start < end){
		int pivot = partition(a,start,end);
		quicksort(a,start,pivot-1);
		quicksort(a,pivot+1,end);
	}
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n;i++){
		cin>>a[i];
	}
	quicksort(a,0,n-1);
	for(int i = 0; i < n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}