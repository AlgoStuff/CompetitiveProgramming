/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.hackerrank.com/contests/codathon/challenges/chetu-and-his-girlfriend
//	Concept : DP
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
	int dp[33] = {0,1,1,0};		
	for(int i = 4;i<= 31;i++){
		dp[i] = dp[i-1] || dp[i-2];
	}
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		cin>>n;
		n = 32-n;
		if(dp[n] == 1) cout<<"CHETU ";
		else cout<<"NISHU ";
		cout<<n<<endl;
	}
return 0;
}
