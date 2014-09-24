/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.hackerrank.com/contests/csindia/challenges/roys-rectangle
//	Concept : Adhoc
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
		lli x,y,x1,y1,x2,y2;
		cin>>x>>y>>x1>>y1>>x2>>y2;
		if(x == x1 && x1 == x2) cout<<0<<endl;
		else if (y == y1 && y1 == y2) cout<<0<<endl;
		else{
			lli left = x1>x2?x2:x1;
			lli right = x1>x2?x1:x2;
			lli top = y1>y2?y1:y2;
			lli down = y1>y2?y2:y1;
			lli l_d,u_d,r_d,d_d;
			l_d = x-left;
			r_d = right-x;
			u_d = top - y;
			d_d = y - down;
			lli dist[] = {l_d,u_d,d_d,r_d};
			sort(dist,dist+4);
			cout<<dist[0]<<endl;

		}
	}
	return 0;
}
