/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://code.google.com/codejam/contest/6214486/dashboard
//	Concept : 
//	Reference :	
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
typedef long long int lli;
typedef long int li;

#define MOD7 1000000007
#define MOD9 1000000009

using namespace std;


int n;
int a[1001][1001];

int solve(int i,int j){
	int res = 0;
	if(i < n && a[i][j]+1 == a[i+1][j]) res = max(res,1+solve(i+1,j));
	if(i > 1 && a[i][j]+1 == a[i-1][j]) res = max(res,1+solve(i-1,j));
	if(j < n && a[i][j]+1 == a[i][j+1]) res = max(res,1+solve(i,j+1));
	if(j > 1 && a[i][j]+1 == a[i][j-1]) res = max(res,1+solve(i,j-1));
	//cout<<i<<" "<<j<<" "<<res<<endl;
	return res;
}

int main(){
	int t;
	scanf("%d",&t);
	int c = 1;
	while(c<=t){
		cin>>n;
		for(int i = 1; i <= n;i++){
			for(int j = 1; j <= n;j++){
				cin>>a[i][j];
			}
		}
		int pos=1000001;
		int res = -1;
		for(int i = 1; i <= n;i++){
			for(int j = 1; j <= n;j++){				
				int val = solve(i,j); 
				//cout<<i<<" "<<j<<" "<<val<<endl;
				if(res <= val+1) { if(pos > a[i][j] && res == val+1) pos = a[i][j]; if(res<val+1) pos = a[i][j]; res = val+1;}
			}
		}
		cout<<"Case #"<<c<<": "<<pos<<" "<<res<<endl;
		c+=1;
	}
	return 0;
}
