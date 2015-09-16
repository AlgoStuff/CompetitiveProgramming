/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/ALMA2015/problems/ALMA01
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
typedef long long int lli;
typedef long int li;

#define MOD7 1000000007
#define MOD9 1000000009
#define PI 3.14159265


using namespace std;




int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		cin>>n>>k;
		lli res = 1;
		for(int i = n;i>n-k;i--){
			res = (res*i)%MOD7;
		}
		cout<<res<<endl;
	}
	return 0;
}
