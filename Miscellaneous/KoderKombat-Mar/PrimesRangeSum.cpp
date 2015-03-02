/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.hackerrank.com/contests/koder-kombat-mar/challenges/mini-primes
//	Concept : Memoization and Seive
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


int primes[100001];
long long int sum[100001];
void seive(){
	memset(primes,0,sizeof(primes));
	memset(sum,0,sizeof(sum));
	primes[0] = primes[1] = 1;
	for(int i = 2; i <= sqrt(100000); i++){
		if(primes[i]==0)
		{
			for(int j = i*i; j <= 100000; j = j+i){
				primes[j] = 1;
			}
		}

	}
	for(int i = 0; i <= 100000;i++){
		if(primes[i] == 0){
			sum[i] = (sum[i-1]+i);
		}
		else{
			sum[i] = sum[i-1];
		}
	}
}

int main(){
	int t;
	seive();
	scanf("%d",&t);
	while(t--){
		int l,r;
		cin>>l>>r;
		cout<<sum[r] - sum[l-1]<<endl;
	}
	return 0;
}
