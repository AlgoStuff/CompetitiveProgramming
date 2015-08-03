/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.hackerearth.com/code-monk-minimum-spanning-tree/algorithm/check-it/
//	Concept : MST
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
int visited[1000001];
void dfs(vector<pair<int,int>> v,int curr){
	for(vector<int>::iterator it = v[curr].start)
}


int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		memset(visited,0,sizeof(visited));
		vector< vector<int> > v(1000000);
		int n,e;
		cin>>n>>e;
		for(int i = 0; i < e;i++){
			int a,b;
			cin>>a>>b;
			v[a].push_back(b);
			v[b].push_back(a);
		}
		dfs(v);
		bool mst = true;
		for(int i = 1; i <= n;i++){
			if(!visited[i]){
				mst = false;
			}
		}
		if(mst) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;

	}
	return 0;
}
