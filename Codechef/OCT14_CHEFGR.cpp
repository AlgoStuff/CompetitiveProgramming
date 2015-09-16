/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/OCT14/problems/CHEFGR
//	Concept : 
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
		int n,m;
		cin>>n>>m;
		int a[n];
		int max = -1;
		for(int i = 0 ; i < n; i++){
			cin>>a[i];
			if(a[i]>max) max = a[i];
		}
		for(int i = 0;i<n;i++){
			m = m - (max-a[i]);
		}
		if(m < 0 || m%n != 0 ) cout<<"No"<<endl;
		else cout<<"Yes"<<endl;

	}
	return 0;
}
