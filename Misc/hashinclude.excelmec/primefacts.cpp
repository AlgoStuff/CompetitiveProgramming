/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://hashinclude.excelmec.org/submit?id=1
//	Concept : Prime Factorization,Seive of Erathosthenes
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

bool primes[30001];
int prime_count = 0;
int primes_list[30001];

void seive(){
	memset(primes,false,sizeof(primes));
	for(int i = 2; i <= sqrt(30001); i++){
		if(primes[i] == false){
			for(int j = i*i; j <= 30000;j = j + i){
				primes[j] = true;
			}
		}
	}	
	for(int i = 2;i<= 30000;i++){
		if(primes[i] == false){		
			primes_list[prime_count] = i;
			prime_count++; 
		}
	}
}


int main(){
	seive();
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		cin>>n;
		for(int i = 0; primes_list[i] <= n && i< prime_count;i++){
			if(n%primes_list[i] == 0) cout<<primes_list[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
