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
using namespace std;
int main(){
	int t;
	cin>>t;
	int c = 1;
	while(c<=t){
		string s;
		cin>>s;
		int len = s.length();
		int hash[27] = {0};
		for(int i = 0; i < len;i++){
			hash[s[i]-96]++;
		}
		bool res = true;
		for(int i = 1; i < 27;i++){
			if(hash[i] != 0 && hash[i] != i){
				res = false;
				break;
			}
		}
		c++;
		if(c>t){
			if(res) cout<<"Yes";
			else cout<<"No";	
		}
		else{
			if(res) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;}
		}
		return 0;
	}
