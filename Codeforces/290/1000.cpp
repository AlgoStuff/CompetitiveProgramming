/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://codeforces.com/contest/510/problem/B
//	Concept : DFS
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
int n,m;
char a[51][51];
int v[51][51];
char key;
bool dfs(int x,int y){
	if(x<0||x>=m||y<0||y>=n) return false;
	if(v[x][y]){if(a[x][y]==key)return true; else return false;}
	else if (a[x][y]!=key) return false;
	v[x][y]=true;
	return (dfs(x+1,y)||dfs(x,y+1)||dfs(x-1,y)||dfs(x,y-1));
}

int main(){
	cin>>m>>n;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin>>a[i][j];
		}
	}
	bool fnd = false;
	memset(v,0,51*51*v[0][0]);
	
	dfs(0,0);
	
	
	

	return 0;
}
