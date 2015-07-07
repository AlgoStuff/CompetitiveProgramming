#include<iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int hash[1000001]={0};
		int max = -1;
		int min = 1000001;
		for(int i = 0; i<n;i++){
			cin>>a[i];
			hash[a[i]]++;
			if(a[i]>max)max=a[i];
			if(a[i]<min)min = a[i];
		}
		for(int i = min; i <=max;i++){
			hash[i] += hash[i-1];
		}
		int out[1000001];
		for(int i = n-1; i >=0;i--){
			out[hash[a[i]]-1] = a[i];
			hash[a[i]]--;
		}
		for(int i  =0; i < n;i++){
			cout<<out[i]<<" ";
		}
		cout<<endl;
	}
}