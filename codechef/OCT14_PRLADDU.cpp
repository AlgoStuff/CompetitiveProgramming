/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/OCT14/problems/PRLADDU
//	Concept : Ad Hoc
//	Reference :	None
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
		int n;
		cin>>n;
		int d[n];
		int p=0,q=0;
		for(int i = 1; i <= n; i++){
			cin>>d[i];
			
			if(!p && d[i] >= 0) p = i;
			if(!q && d[i] < 0) q = i;

		}

		lli res = 0;
		int cnt = 0;
		int i;
		while(!(p>n) && !(q>n)){
			
			int min_ = min(d[p],-1*d[q]);
			res += abs(p-q)*min_;
			d[p] -= min_;
			d[q] += min_;
			if(d[p] == 0){
				for(i = p+1; i <=n ;i++){
					if(d[i]>=0){
						break;
					}
					
				}
				p = i;
			}
			if(d[q] == 0){				
				for(i = q+1; i <=n ;i++){
					if(d[i]<0){
						break;
					}
				}	
				q = i;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
