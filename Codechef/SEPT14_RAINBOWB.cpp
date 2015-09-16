/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/SEPT14/problems/RAINBOWB
//	Concept : Simple Math
//	Reference :	https://www.quora.com/Permutations-and-Combinations/What-is-the-number-of-ways-in-which-n-identical-objects-can-be-divided-into-r-groups-where-each-group-can-have-any-number-of-objects-including-0
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




int main(){
	int n;
	scanf("%d",&n);
	lli res = 0;
	lli power6[1000001];
	power6[0] = 1;
	for(int i = 1;i<=1000000;i++){
		power6[i] = ((power6[i-1]*(5+i))/i)%MOD7;
	}
	if ( n < 13) cout<<0<<endl;
	else{
		n = n-13;
		for(int i = 0; i <=n;i=i+2){
			res = (res + power6[i/2])%MOD7;
		}
		cout<<res<<endl;
	}
	return 0;
}
