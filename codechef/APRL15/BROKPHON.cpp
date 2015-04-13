/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/APRIL15/problems/BROKPHON
//	Concept : AdHoc
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
		int n;
		cin>>n;
		ll a[n+1];
		int hsh[100001]={0};
		int res=0;
		ll prev = 0,curr;
		for(int i = 1; i <= n;i++){
			cin>>a[i];
		}
		a[0] = a[1];
		a[n+1]=a[n];
		for(int i = 1; i<=n;i++){
			
			if(a[i]!=a[i+1] || a[i]!=a[i-1]){
				hsh[i]=1;
			}
		}
		for(int i = 1; i<=n;i++){
			if(hsh[i])res++;
		}
		cout<<res<<endl;
	}
	return 0;
}
