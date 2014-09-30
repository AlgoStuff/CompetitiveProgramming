/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.hackerearth.com/algoxtreme/algorithm/maximum-prize/
//	Concept : sort
//	Reference :	
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
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		ull res = 0;
		for(int i = 0 ; i < n ; i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i = 0 ; i < n ; i++){
			res+=a[i];
		}
		cout<<res<<endl;
	}
	return 0;
}
