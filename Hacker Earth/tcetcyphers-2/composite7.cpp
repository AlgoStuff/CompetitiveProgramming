/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.hackerearth.com/tcetcyphers-2/algorithm/composite-numbers-having-7/
//	Concept : Memoization,DP,simple math
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

bool primes[1000001];
void prime_gen(){
	for(int i = 2; i <= 1000;i++){
		if(primes[i]){
			for(int j = i*i;j<=1000000;j=j+i){
				primes[j] = false;
				
			}
		}
	}
}
bool is_seven(int i){
	while(i){
		int rem = i%10;
		if(rem == 7) return true;
		i = i/10;
	}
	return false;
}
int main(){
	memset(primes,true,sizeof(primes));
	prime_gen();
	int count[1000001]={0};
	for(int i = 2; i <= 1000000;i++){
		if(is_seven(i) && !primes[i]) count[i] = count[i-1]+1;
		else count[i] = count[i-1];
	}
	int t;
	scanf("%d",&t);
	while(t--){
		int m,n;
		cin>>m>>n;
		
			if(count[n]-count[m-1] == 0) cout<<-1<<endl;
			else
				cout<<count[n]-count[m-1]<<endl;
		
	}
	return 0;
}
