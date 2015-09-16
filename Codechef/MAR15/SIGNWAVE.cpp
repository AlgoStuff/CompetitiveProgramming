/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/MARCH15/problems/SIGNWAVE
//	Concept : Maths
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




int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int c,s,k;
		cin>>s>>c>>k;
		ll res[101]={0};
		int sin_store[51] = {0};
		int cos_store[51] = {0};
		if(s>0){
			for(int i = 1; i <= s;i++){
				res[i] = pow(2,s-i);
				if(i==s)res[i]=3;
			}
		}
		if(c>0){
			for(int i = 1; i <= c;i++){
				if(s-i>0){
					res[s-i+1] += res[s-i];
					res[s-i]=0;
				}
				else res[1] += pow(2,i);
			}
		}
		ll ans=0;
		for(int i = k;i<=100;i++){
			ans+=res[i];
		}
		cout<<ans<<endl;

	}
	return 0;
}
