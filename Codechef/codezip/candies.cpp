/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/CDZP2014/problems/CAN1
//	Concept : Brute force
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
		int n = s.length();
		int ans = -1;
		for (int i = 0; i < n;i++){
			int res = 1;
			vector<char>types;
			types.push_back(s[i]);
			for(int j = i+1;j<n;j++){
				if(types.size()<2){
					if(types[0]==s[j])res+=1;
					else{
						types.push_back(s[j]);
						res+=1;
					}
				}
				else{
					if(types[0] == s[j] || types[1]==s[j]) res+=1;
					else break;

				}
			}
			ans = max(ans,res);
	
		}
		cout<<ans<<endl;
	}
	return 0;
}
