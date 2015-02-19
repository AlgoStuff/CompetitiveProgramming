/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.hackerearth.com/deja-vu/algorithm/untitled/
//	Concept : Primes
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
int p[78500];
long long int pf[1000001]={0};
long long int sumhash[1000001]={0};

int s=0;
void seive(){
	memset(primes,true,sizeof(primes));
	for(int i = 2; i <= 1000;i++){
		for(int j = i*i; j <= 1000000;j=j+i){
			primes[j] = false;
		}
	}

	for(int i = 2; i <=1000000;i++){
		if(primes[i] == true){ p[s]=i;s++;}
	}

}

int main(){
	seive();
	for(int i = 2; i <=1000000;i++){
		if(primes[i]){
			pf[i] = (pf[i-1]+1)%MOD7;
			sumhash[i]= (sumhash[i-1]+i)%MOD7;
		}
		else{
			pf[i]=pf[i-1];
			sumhash[i]=sumhash[i-1];
		}
	}
	


	int t;
	
	scanf("%d",&t);
	int n;
	while(t--){
		cin>>n;
		cout<<pf[n]<<" ";
		cout<<sumhash[n]<<" ";
		long long int res=1;
		for(int i = 0; i < s;i++){
			if(p[i]<=n){
				int mid_res = 0;
				for(int j = 1;j<100000;j++){
					int offset = n/pow(p[i],j);
					if( offset > 0){
						mid_res +=  offset;
					}
					else {break;}
				}
				res = (res*(mid_res+1))%MOD7;	
			}
			else break;
		}
		cout<<res<<endl;
	}
	return 0;
}
