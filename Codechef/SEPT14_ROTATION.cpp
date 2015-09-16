/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/SEPT14/problems/ROTATION
//	Concept : AdHoc
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
#define x getchar()
#define y putchar

using namespace std;




int main(){
	int m,n;
	scanf("%d %d",&n,&m);
	li a[n];
	for(int i = 1; i <= n ; i++){
		cin>>a[i];
	}
	int s,e;
	s = 1;
	e = n;
	while(m--){
		char q;
		int l;
		cin>>q>>l;
		if(q == 'R'){
			l--;
			if(s+l > n) cout<<a[s+l-n]<<endl;
			else cout<<a[s+l]<<endl;
		}
		else if(q == 'C'){
			if(s+l > n) s = s+l-n;
			else s = s+l;

			if(s == 1) e = n;
			else e = s-1;
		}
		else if(q == 'A'){
			if(s-l<=0) s = n+(s-l);
			else s = s-l;

			if(s == 1) e = n;
			else e = s-1;
		}
	}
	return 0;
}
