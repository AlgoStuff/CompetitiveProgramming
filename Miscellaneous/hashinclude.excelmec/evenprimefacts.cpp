/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://hashinclude.excelmec.org/submit?id=2
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

bool primes[100001];
int prime_count = 0;
int primes_list[100001];

void seive(){
	memset(primes,false,sizeof(primes));
	for(int i = 2; i <= sqrt(100000); i++){
		if(primes[i] == false){
			for(int j = i*i; j <= 100000;j = j + i){
				primes[j] = true;
			}
		}
	}	
	for(int i = 2;i<= 100000;i++){
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
		int even_count = 0;
		int odd_count = 0;
		int n;
		cin>>n;
		for(int i = 0; primes_list[i] <= n && i< prime_count;i++){
			int rem = n;
			int curr_count = 0;
			while(rem%primes_list[i] == 0){
				curr_count++;
				rem = rem/primes_list[i];
			}
			if(curr_count>0 && curr_count%2 == 0) even_count++;
			if(curr_count>0 && curr_count%2 == 1) odd_count++;
		}

		if(even_count>odd_count) cout<<"Demon Number";
		else cout<<"Normal Number";
		cout<<endl;
	}
	return 0;
}
