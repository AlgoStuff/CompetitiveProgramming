/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.hackerearth.com/deja-vu/algorithm/power-matrix/
//	Concept : Matrix Exponentiation
//	Reference :	http://discuss.codechef.com/questions/2335/building-up-the-recurrence-matrix-to-compute-recurrences-in-ologn-time
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

long long int res[51][51];

void solve(long long int a[51][51],m,n){
	if(n==1)
		return;
	else{
		if(n%2 == 0){
			solve(a,m,n/2);
			multiply(a,m);
		}

	}
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int m,n;
		cin>>m>>n;
		for(int i = 0;i < m;i++){
			for(int j = 0;j < m;j++){
				cin>>a[i][j];
		}
	}
	solve(a,m,n);
	return 0;
}
