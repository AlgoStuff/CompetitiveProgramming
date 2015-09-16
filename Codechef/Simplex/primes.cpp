/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/SMPLX14/problems/SIMKRY
//	Concept : Memoization
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


int primes[100001];
void seive(){
	memset(primes,0,100001);
	primes[1]=1;
	for(int i = 2; i <= sqrt(100000);i++){
		if(primes[i]==0){
			for(int j = i*i;j<=100000;j=j+i){
				primes[j]=1;
			}
		}
	}
}

int main(){
	seive();
	long long int q[100001]={0};
	q[1]=0;
	q[2]=2;
	for(int i = 3; i <= 100000; i++){
		if(primes[i]==0){
			q[i] = (q[i-1]*i)%MOD9;
		}
		else{
			q[i]=q[i-1];
		}
	}
	int t;
	scanf("%d",&t);
	int cnt=0;
	while(t--){
		int a,b;
		cin>>a>>b;
		if(a==b){
			if(primes[a]==1)cout<<0<<endl;
		}
		cout<<(q[b]-q[a-1])%MOD9<<endl;
	}
	return 0;
}
