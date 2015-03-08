/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : Problem Setter
//	Concept : None
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

bool primes[1000001];
int sum[1000001];
void sieve(){
	memset(primes,false,sizeof(primes));
	memset(sum,0,sizeof(sum));
	for(int i = 2; i <=1000;i++){
		if(primes[i]==false){
			sum[i] = sum[i-1]+1;
			for(int j = i*i; j <=1000000;j+=i){
				primes[j]=true;
			}
		}
		else{
			sum[i]=sum[i-1];
		}
	}
	for(int i = 1001;i<=1000000;i++){
		if(primes[i] == false) sum[i] = sum[i-1]+1;
		else sum[i] = sum[i-1];
	}
}

int main(){
	int t;
	sieve();
	scanf("%d",&t);
	while(t--){
		int l,r;
		cin>>l>>r;
		printf("%.6f\n",(float)(((sum[r]-sum[l-1])*1.0)/(r-l+1)));
	}
	return 0;
}
