/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link :
//	Concept : Graph , Adjacency list.
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

int vis[100001];
int ban[100001];
int bfs(vector< vector<int> > v,int n){
	queue <int> q;
	q.push(n);
	vis[n]=1;
	ll res = 0;
	while(!q.empty()){
		
		int curr = q.front();
		//cout<<curr<<endl;
		res+=ban[curr];
		for(vector<int>::iterator it = v[curr].begin(); it!=v[curr].end();++it){ 
			if(vis[*it]==0)
			{
				q.push(*it);
				vis[*it]=1;
			}
			}
			q.pop();
		}
		return res;

	}



	int main(){
		int t;
		cin>>t;
		while(t--)
		{
			vector< vector<int> > v(100001);
			memset(vis,0,sizeof(vis));
			memset(ban,0,sizeof(ban));
			int n,m;
			cin>>n>>m;
			for(int i = 0; i < m;i++){
				int a,b;
				cin>>a>>b;
				v[a].push_back(b);
				v[b].push_back(a);
			}
			for(int i = 0; i < n;i++){
				cin>>ban[i+1];
			}
			ll res = 0;
			for( int i = 1;  i <= n;i++){
				if(vis[i]==0){
					ll curr = bfs(v,i);
					if(curr>res)res=curr;
				}
			}
			cout<<res<<endl;
		}
		return 0;
	}
