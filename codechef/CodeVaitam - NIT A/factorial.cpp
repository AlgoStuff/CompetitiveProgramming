/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/CDVA2015/problems/CDVA1502/
//	Concept : Simple Math
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
		int n,k;
		cin>>n>>k;
		ll m = -1;
		for(int i = 0; i < k;i++){
			ll temp;
			cin>>temp;
			if(temp>m) m=temp;
		}
		ll res=1;
		for(int i = n; i >0 ;i--){
			res = (res*i)%m;
		}
		cout<<res<<endl;
	}
	return 0;
}
