/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/JAN15/problems/CHEFSTON
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
		ull ti[n];
		ull pro[n];

		for(int i = 0; i < n; i++){
			cin>>ti[i];
		}
		for(int i = 0; i < n; i++){
			cin>>pro[i];
		}
		ull max_pro = 0;

		for(int i = 0 ; i < n;i++){
			ull curr_pro = (k/ti[i])*pro[i];
			if(max_pro < curr_pro) max_pro = curr_pro;
		}
		cout<<max_pro<<endl;
	}
	return 0;
}
