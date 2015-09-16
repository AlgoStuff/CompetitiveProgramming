/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/NOV14/problems/DISCHAR
//	Concept : Hashing
//	Reference :	None
//																		
/***********************************************************************/


//header files

#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <set>
#include <map>
#include <ctime>
#include <limits.h>

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
		string s;
		cin>>s;
		int len = s.length();
		int hash[26]={0};
		int res = 0;
		for(int i = 0; i < len;i++){
			int pos = s[i]-97;
			if(hash[pos] == 0){
				hash[pos]+=1;
				res+=1;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
