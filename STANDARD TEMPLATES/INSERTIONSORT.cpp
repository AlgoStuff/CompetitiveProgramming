#include<iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i = 0; i < n;i++){
			int j = i-1;
			int curr = a[i];
			while(j>=0){
				if(curr<a[j]){
					a[j+1] = a[j];
				}
				else{
					break; 
				}
				j--;
			}
			a[j+1]=curr;

		}

		for(int i = 0; i < n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}