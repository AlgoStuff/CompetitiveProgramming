/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/OCT14/problems/PRPOTION 
//	Concept : Greedy Strategy
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
		lli r,g,b,m,temp;
		cin>>r>>g>>b>>m;
		lli max_r = -1000000001,max_g=-1000000001,max_b=-1000000001;
		for(int i = 0; i<r;i++){
			cin>>temp;
			if(temp>max_r)max_r=temp;
		}
		for(int i = 0; i<g;i++){
			cin>>temp;
			if(temp>max_g)max_g=temp;
		}
		for(int i = 0; i<b;i++){
			cin>>temp;
			if(temp>max_b)max_b=temp;
		}
		lli a[3] = {max_r,max_g,max_b};
		sort(a,a+3);
		while(m--){
			
			a[2] = a[2]/2;
			sort(a,a+3);
			if(a[2] == 0) break;
		}
		sort(a,a+3);
		cout<<a[2]<<endl;
	}
return 0;
}
