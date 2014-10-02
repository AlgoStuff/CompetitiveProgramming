/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.hackerearth.com/practice-contest-1-3/algorithm/generate-the-primes-2/
//	Concept : Sieve of eratosthenes 
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

bool primes[10000000];
long long int prime_store[664580];
long int res = 0;

void sieve(){
	memset(primes,true,sizeof(primes));
	for(int i = 2; i<= sqrt(10000000);i++){
		if(primes[i] == true){
		for(int j = i*i; j <= 10000000; j = j+i){
			primes[j] = false;
		}}
	}
	for(int i = 2; i <=10000000;i++){
		if(primes[i]){
			prime_store[res]=i;
			res++;
		}
	}
}


int main(){
	sieve();
	int t;
	scanf("%d",&t);
	while(t--){
		long long int n;
		cin>>n;
		cout<<prime_store[n-1]<<endl;
	}
	return 0;
}
