/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/ACMAMR14/
//	Concept : 
//	Reference :	
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
	
	string s;
	cin>>s;
	int l = s.length();
	int m;
	scanf("%d",&m);
	while(m--){
		int q,r;
		cin>>q>>r;
		int offset = 10%q;
		long int res = 0;
		for(int i = 0;i<l;i++){
			int prev = 0;
			for(int j = i;j<l;j++){
				prev = ( (((prev%q)*offset)%q)+((int(s[j]-'0'))%q))%q;
				if (prev == r)res++;
			}
		}
		cout<<res<<endl;
	}
return 0;
}
