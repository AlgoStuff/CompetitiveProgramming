/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.hackerearth.com/july-easy-15/algorithm/supernatural-squad-2/
//	Concept : Recurr,DP
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
typedef long long int ll;
typedef long int li;

#define MOD7 1000000007
#define MOD9 1000000009
#define PI 3.14159265


using namespace std;

ll gcd(ll a,ll b){
	while(b){
		ll temp = b;
		b=a%b;
		a=temp;
	}
	return a;
}




int main(){
	int t;
	scanf("%d",&t);
	ll dp[201][201];
	memset(dp,0,sizeof(dp[0][0])*201*201);
	for(int i = i; i <=200 ;i++){
		for(int j = 200; j >0;j--){
			if(i==j) dp[i][j]=1;
			else if ( i < j ) dp[i][j]=0;
			else {
				dp[i][j] = dp[i][j+1]+dp[i-j][j];

			}
		}
	}
	
	while(t--){
		int n,k;
		ll res = 0;
		cin>>n>>k;
			cout<<dp[n][k]<<endl;
	}
	return 0;
}
