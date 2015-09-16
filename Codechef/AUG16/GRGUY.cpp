/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.codechef.com/AUG15/problems/GRGUY
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

int v[2][1000001];
int mat[2][1000001];
int max_len;
vector<int> res;
int dfs(int r,int c,int swaps){
	//cout<<r<<" "<<c<<endl;
	if(r<0 || r>1 || c<0 || c>=max_len || v[r][c]) return 0;
	if(mat[r][c]==0)return 0;
	else{
		v[r][c]=1;
		if(c==max_len-1){
			res.push_back(swaps);
			return 1;
		}
		else{
			int front = dfs(r,c+1,swaps);
			if(front)v[r][c]=0;
			int down = dfs(r+1,c,swaps+1);
			if(down)v[r][c]=0;
			int up = dfs(r-1,c,swaps+1);
			if(up)v[r][c]=0;
			int dcross = dfs(r+1,c+1,swaps+1);
			if(dcross)v[r][c]=0;
			int ucross = dfs(r-1,c+1,swaps+1);
			if(ucross)v[r][c]=0;
			return 1;
		}	
	}
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		memset(v,0,sizeof(v[0][0])*2*1000001);
		string s1,s2;
		cin>>s1>>s2;
		int len = s1.length();
		max_len = len;
		for(int i = 0; i < len;i++){
			if(s1[i]=='.')mat[0][i]=1;
			else mat[0][i]=0;
			if(s2[i]=='.')mat[1][i]=1;
			else mat[1][i]=0;
		}
		int ss1 = dfs(0,0,0);
		memset(v,0,sizeof(v[0][0])*2*1000001);
		int ss2 = dfs(1,0,0);
		sort(res.begin(),res.begin()+res.size());
		if(res.size())cout<<"Yes\n"<<res[0]<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
