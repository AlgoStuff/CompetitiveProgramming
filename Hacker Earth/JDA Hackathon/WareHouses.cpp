/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.hackerearth.com/jda-hackathon/algorithm/strategic-warehouse-placements/
//	Concept : greedy approach
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
#include<ctime>

//typedefs

typedef unsigned long long int ull;
typedef long long int ll;
typedef long int li;

#define MOD7 1000000007
#define MOD9 1000000009
#define x getchar()
#define y putchar

using namespace std;

// Fast input
inline void read(ll & n)
{
	n = 0;
	char ch = x; int sign = 1;
	while(ch < '0' || ch > '9'){if(ch == '-') sign = -1; ch = x; }
	while(ch >= '0' && ch<= '9')
	{
		n = n*10 + ch - '0';
		ch = x;
	}
	n *= sign;
}
// Fast output
inline void out(ll n)
{
	char ch[15];
	int ind=0;
	if(n<0) n *= -1;
	if(n == 0)
	{
		y('0');
	}
	while(n > 0)
	{
		ch[ind] = n%10 + '0';
		n /= 10;
		ind++;
	}
	while(ind--) y(ch[ind]);
	y('\n');
}

ull gcd(ull num , ull den){
	if(num == 0) return 1;
	while(num != den){
		if(num > den) num = num - den;
		else den = den - num;
	}
	return num;
}
bool compare(pair<int,int>a,pair<int,int>b){
	if(a.first>b.first) return true;
	else return false;
}

int main(){
	int n,m;
	cin>>n>>m;
	bool a[100000];
	std::vector< pair<int,int> > v(100000);
	memset(a,false,100000);
	for(int i = 1; i <= n;i++){
		v[i].first = 0;
		v[i].second = i;
	}
	std::vector< vector<int> > adj(100000);
	while(m--){
		int a,b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
		v[a].first++;
		v[b].first++;
	}
	sort(v.begin()+1,v.begin()+n+1,compare);
	int res = 0;
	for(int i = 1; i <= n;i++){
		if(a[v[i].second] == false){
			res++;
			a[v[i].second] = true;
			int len =  adj[v[i].second].size();
			for(int j = 0; j < len;j++){
				a[adj[v[i].second][j]] = true;
			}
		}}
		cout<<res<<endl;
		return 0;
	}
