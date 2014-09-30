/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.hackerearth.com/algoxtreme/algorithm/fight-in-friends/
//	Concept : bfs
//	Reference :	None
//																		
/***********************************************************************/


//header files

#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<iomanip>
#include<cmath>
#include<set>
#include<map>
#include<ctime>

//typedefs

typedef unsigned long long int ull;
typedef long long int lli;
typedef long int li;

#define MOD7 1000000007
#define MOD9 1000000009

using namespace std;
int n,m,s,e;
int a[1001][1001];
int visited[1001];
int res = 0;


struct pp{
	int node;
	int level;
};
int bfs(){
	if(s == e){
		cout<<res<<endl;
		return 1;
	}
	queue <pp*> q;
	pp* ps = new pp;
	ps->node = s;
	ps->level = 0;
	q.push(ps);
	visited[ps->node] = 1;
	res++;
	while(!q.empty()){
		pp* curr = q.front();
		q.pop();
		
		for(int i = 1; i <= n;i++){
			if(a[curr->node][i] && visited[i] == 0){visited[i] = 1; if(i == e){ cout<<curr->level+1<<endl; return 1;} 
						pp* pm = new pp;
						pm->node = i;
						pm->level = curr->level+1;
						q.push(pm); }
		}
	}
	return 0;
}


int main(){
	memset(visited,0,sizeof(visited));
	cin>>n>>m>>s>>e;
	for(int i = 1 ; i <= n;i++){
		for(int j = 1; j <= n; j++){
			a[i][j] = 1;
		}
	}
	while(m--){
		int ai,bi;
		cin>>ai>>bi;
		a[ai][bi] = 0;
		a[bi][ai] = 0;
	}
	int res = bfs();
	if(res == 0) cout<<-1<<endl;
	return 0;
}
