/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : www.codechef.com/APRIL15/problems/PIANO1
//	Concept : AdHoc
//	Reference : None
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
		int n,w=0;
		cin>>s>>n;
		n=12*n;

		int l = s.length();
		for(int i =0; i < l;i++){
			if(s[i]=='S')w+=1;
			else w+=2;
		}

		int res = 0;
		int i = 1;
		while(i*w<=n){
			res+=(n-i*w);
			i=i+1;
		}
		cout<<res<<endl;
	}
	return 0;
}
