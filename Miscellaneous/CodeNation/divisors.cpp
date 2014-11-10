/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : Private
//	Concept : 
//	Reference :	
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
bool primes[10000000];

void seive(){
	memset(primes,true,sizeof(primes));
	primes[1]=false;
	for(int i = 2 ;i*i <=10000000;i++){
		if(primes[i]){
			for(int j = i*i; j <= 10000000; j = j+i){
				primes[j] = false;
			}
		}
	}
}

int get_spcldivs(lli num,int n){
	int res = 0;
	for(int i = 2; i*i <= num;i=i+1){
		if(num%i == 0){
			lli den =  pow(i,n);
			//cout<<den<<" ";
			if(num%den != 0) res+=1;
			if(i*i != num){
			lli den = pow(num/i,n);
			if(num%den != 0) res+=1;
			}
		}
	}
	//cout<<num<<" "<<res<<endl;
	return res;
}
int main(){
	seive();
	lli p,q;
	cin>>p>>q;
	q = p+q;
	int n;
	cin>>n;
	int res = 0;
	for(int i = p ; i <= q; i++){
		if(!primes[i]){
			res=res+get_spcldivs(i,n);
		}
	}
	cout<<res<<endl;
	return 0;
}
