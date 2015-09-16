/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.codechef.com/SEPT15/problems/MSTEP
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
		int a[501][501];
		vector < pair < int, int > > v(250001);
		for(int i = 0 ;i < n;i++){
			for(int j = 0; j < n;j++){
				cin>>a[i][j];
				v[a[i][j]].first = i;
				v[a[i][j]].second = j;
			}
		}
		int res = 0;

		for(int i = 1; i < n*n; i++){
			//cout<<v[i].first<<" "<<v[i].second<<endl;
			res+= ( abs(v[i].first - v[i+1].first) + abs(v[i].second - v[i+1].second));
		}
		cout<<res<<endl;
	}
	return 0;
}
