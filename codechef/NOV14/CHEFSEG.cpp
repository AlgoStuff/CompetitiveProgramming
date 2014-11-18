/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/NOV14/problems/CHEFSEG
//	Concept : Exponentiation
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
typedef long long int lli;
typedef long int li;

#define MOD7 1000000007
#define MOD9 1000000009

using namespace std;




int main(){
	int t;
	ull exps[40];
	for(int i = 0; i <= 40 ; i++){
		exps[i] = pow(2,i);
	}
	scanf("%d",&t);
	while(t--){
		lli n,k;
		cin>>n>>k;
		ull prev_sum = 0;
		for(int i = 0 ; i <= 40;i++){
			prev_sum += exps[i];
			if(prev_sum >= k){				
				prev_sum -= exps[i];
				ull steps = k - prev_sum - 1;
				long double frac = (((2*steps+1))/pow(2,i+1))*n;
				printf("%.8Lf\n", frac);
				break;
			}
		}
	}
	return 0;
}
