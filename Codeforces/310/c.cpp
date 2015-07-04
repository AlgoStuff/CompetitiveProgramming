/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link :http://codeforces.com/contest/556/problem/C
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
	int n,k;
	cin>>n>>k;
	int res2 = 0;
	int res = 0;
	for(int i = 0; i < k;i++){
		int tmp;
		cin>>tmp;
		bool fnd = false;
		
		for(int j = 1; j <= tmp;j++){
			int temp;
			cin>>temp;
			if(temp==1){fnd = true;}
			if(fnd and temp == j) res+=1;
		}
		res2+=(tmp-1);
	}
	cout<<(res2-res+1)+(n-res)<<endl;
	return 0;
}
