/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/COOK50/problems/SUBGCD
//	Concept : DP,Primes
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


bool primes[100001];


void seive(){
	memset(primes,false,sizeof(primes));
	for(int i = 2; i <= sqrt(100000); i++){
		if(primes[i] == false){
			for(int j = i*i; j <= 100000;j = j + i){
				primes[j] = true;
			}
		}
	}	
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n;i++){
			cin>>a[i];
		}
		bool visited[100001];
		memset(bool,false,sizeof(visited));
		int max = 0;
		int curr_max = 0;
		for(int i = 0; i < n;i++){
			
		}
	}
	return 0;
}
