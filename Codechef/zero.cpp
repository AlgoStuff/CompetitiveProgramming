#include<iostream>
using namespace std;
int main(){
	int t,n,p;
	bool check = true;
	cin>>n;

	int a[n];
	
	
		

		for(int  i = 1 ; i <= n; i++){
			cin>>a[i];
			if(i > 1 && check)
			{
				if(a[i-1]>a[i]){
					check = false;
				}
				else {
					a[i] = a[i] - a[i-1];
					a[i-1] = 0;
				}
			}}


		
		if(a[n] == 0 && check){ cout<<"YES"<<endl;}
				else if(a[n] != 0 && check){ cout<<"NO"<<endl;}
				else if(!check) cout<<"NO"<<endl;
					
	
	return 0;}
