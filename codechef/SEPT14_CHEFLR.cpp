/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/SEPT14/problems/CHEFLR
//	Concept : Adhoc , Simple Maths
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
	int t;
	scanf("%d",&t);
	while(t--){
		string s;
		cin>>s;
		int len = s.length();
		ull res = 1;
		for(int i = 0; i < len;i++){
			if(s[i] == 'l' && i%2 == 0) res=res*2;
			else if(s[i] == 'r' && i%2 == 0) res=res*2+2;
			else if(s[i] == 'l' && i%2 == 1) res=res*2-1;
			else if(s[i] == 'r' && i%2 == 1) res=res*2+1;
			res = res%MOD7;
		}
		cout<<res<<endl;
	}
	return 0;
}
