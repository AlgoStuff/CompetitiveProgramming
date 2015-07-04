/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://codeforces.com/contest/553/problem/A
//	Concept : Hard Dp and Combinatorics
//	Reference :	http://codeforces.com/blog/entry/18842 [ Editorial ]
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
const long long int mod = 1000000007;
const int N = 4;
int C[N][N];
int c[N],sum[N];
void init(){
    for(int i = 0 ; i < N ; i ++) C[i][0] = 1;
    for(int i = 1 ; i < N ; i ++)
    for(int j = 1 ; j <= i ; j ++)
        C[i][j] = (C[i - 1][j] + C[i - 1][j - 1]) % mod;
}


int main(){
init();
for(int i = 0 ; i < N ; i ++){
	for(int j = 0 ; j < N ; j ++){
		cout<<C[i][j]<<" ";
	}
	cout<<endl;
}
	return 0;
}
