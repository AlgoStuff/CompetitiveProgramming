/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.codechef.com/SEPT15/problems/DONUTS
//	Concept : 
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
	int a[100000];
	while(t--){
		ll n,m;
		scanf("%lld %lld",&n,&m);
		for(int i = 0; i < m;i++){
			scanf("%d",&a[i]);
		}
		sort(a,a+m);
		int temp = m-1;
		int res = 0;
		for(int i = 0; i < m; i++){
			temp = temp - a[i];
			if(temp == 0){
				res+=a[i];
				printf("%d\n",res );
				break;
			}
			else if(temp < 0){
				res+=(a[i]+temp);
				printf("%d\n",res );
				break;
			}
			else{
				res+=a[i];
				temp-=1;
			}
		}
	}
	return 0;
}
