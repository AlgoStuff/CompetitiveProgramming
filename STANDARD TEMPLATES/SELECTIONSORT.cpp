#include<iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n;i++){
			cin>>a[i];
		}

		for(int i = 0; i < n;i++){
			int min = a[i];
			int minpos = i;
			for(int j = i; j < n;j++){
				if(a[j]<min){
					min = a[j];
					minpos = j;
				}
			}
			int temp = a[i];
			a[i] = a[minpos];
			a[minpos] = temp;
		}

		for(int i =0; i < n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}