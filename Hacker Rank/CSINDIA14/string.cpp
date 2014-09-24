/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.hackerrank.com/contests/csindia/challenges/broken-keyboard
//	Concept : Hashing
//	Reference :	None
//																		
/***********************************************************************/


//header files

#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<iomanip>
#include<cmath>
#include<set>
#include<map>
#include<ctime>

//typedefs

typedef unsigned long long int ull;
typedef long long int lli;
typedef long int li;

#define MOD7 1000000007
#define MOD9 1000000009


using namespace std;




int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		string a;
		string b;
		cin>>a>>b;
		bool hash[27];
		memset(hash,false,sizeof(hash));
		int len_a = a.length();
		int len_b = b.length();
		for(int i = 0; i < len_a;i++){
			hash[a[i]-96] = true;
		}
		int res = 0;
		for(int i = 0; i < len_b; i++){
			if(hash[b[i]-96] == 1){
				hash[b[i]-96] = false;
				res++;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
