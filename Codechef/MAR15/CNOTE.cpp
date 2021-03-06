/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/MARCH15/problems/CNOTE
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




int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int x,y,k,n;
		scanf("%d%d%d%d",&x,&y,&k,&n);
		bool lucky = false;
		while(n--){
			int p,c;
			scanf("%d%d",&p,&c);
			if(p>=x-y && c<=k){
				lucky=true;
			}
		}
		if(lucky) printf("LuckyChef\n");
		else printf("UnluckyChef\n");

	}
	return 0;
}
