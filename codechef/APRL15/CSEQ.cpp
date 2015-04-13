/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/APRIL15/problems/CSEQ
//	Concept : Summation of Summation
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

#define MOD3 1000003
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


ll summation(ll x, int j){
	ll res=0;
	for(ll i = 1; i<=x;i++){
		res+=pow(i,j);
		res=res%MOD3;
	}
	return res;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		ll n,l,r;
		cin>>n>>l>>r;
		ll x = r-l+1;
		ll res = 0;
		for(int i = 0; i< n;i++){
			res+= summation(x,i);
			res=res%MOD3;
		}
		cout<<res<<endl;
	}
	return 0;
}
