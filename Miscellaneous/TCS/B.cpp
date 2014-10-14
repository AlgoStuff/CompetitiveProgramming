/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : None
//	Concept : Hashing
//	Reference : None
//																		
/***********************************************************************/


#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	int c = 1;
	while(c<=t){
		int n,max_t;
		cin>>n>>max_t;
		int energy[n];
		for(int i = 0 ; i < n;i++){
			cin>>energy[i];
		}
		int init_e,min_e;
		cin>>init_e>>min_e;
		bool res = true;
		sort(energy,energy+n);
		if(max_t < n){ n=max_t;}
		
			for(int i = 0 ; i < n;i++){
				if(init_e < energy[i]){ res = false; break;}
				init_e = init_e + (init_e - energy[i]); 
			}
			if(init_e < min_e) res = false;
		
		c++;
		if(c>t){
			if(res) cout<<"Yes";
			else cout<<"No";	
		}
		else{
			if(res) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
	}
}