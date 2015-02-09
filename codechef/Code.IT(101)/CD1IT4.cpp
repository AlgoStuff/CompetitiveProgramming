/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/DCOD2015/problems/CD1IT4
//	Concept : BFS
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
int res = 0;
int bfs(int a[1000][]){
	
}


int main(){
	int m,n,p;
	cin>>m>>n>>p;
	bool a[m][n];
	memset(a,true,sizeof(a[0][0])*m*n);
	for(int i = 0 ; i < p;i++){
		int p1,p2;
		cin>>p1>>p2;
		a[p1][p2]=false;
	}
	return 0;
}
