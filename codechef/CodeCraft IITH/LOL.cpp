/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/CDCRF15R/problems/LOLOL
//	Concept : Math
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
		string s;
		cin>>s;
		int l = s.length();
		int lc[1000000]={0},tlc=0;
		ull res = 0;
		for(int i = 0; i < l;i++){
			if(s[i] == 'L'){
				tlc++;
				lc[i]=tlc;
			}
			else
				lc[i]=tlc;
		}
		for(int i = 0;i<l;i++){
			if(s[i]=='O'){
				res+= lc[i]*(tlc-lc[i]);
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
