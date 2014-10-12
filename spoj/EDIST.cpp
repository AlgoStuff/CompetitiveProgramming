/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.spoj.com/problems/EDIST/
//	Concept : levenshtein distance
//	Reference :	Wikipedia
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


int dp[2][2001];

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		int l1 = s1.length();
		int l2 = s2.length();
		int curr_row = 0;
		for(int i = 0; i <= l1;i++){
			for(int j = 0;j<=l2;j++){
				if(i==0){
					dp[curr_row][j]=j;
				}
				else if(j==0){
					dp[curr_row][j]=i;
				}
				else{
					if(s1[i-1]==s2[j-1]) dp[curr_row][j] = dp[1-curr_row][j-1];
					else dp[curr_row][j] = min(dp[curr_row][j-1]+1,
												min(dp[1-curr_row][j]+1,dp[1-curr_row][j-1]+1)
											);
				}
			}
			curr_row = 1-curr_row;
		}
		cout<<dp[1-curr_row][l2]<<endl;
	}
	return 0;
}
