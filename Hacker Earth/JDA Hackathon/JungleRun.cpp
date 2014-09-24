/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.hackerearth.com/jda-hackathon/algorithm/jungle-run/
//	Concept : Dijkstra's algorithm , single source horest path 
//	Reference :	http://en.wikipedia.org/wiki/Dijkstra's_algorithm
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
int e;
int res = 1000000;
int visited[30][30];
char graph[30][30];
int sr,sc,er,ec;
bool check_inside(int i,int j, int r,int c){
	if(i>= 0 && j >= 0 && i < r && j < c) return true;
	else return false;
}
void bfs(){
	memset(visited,1000000,sizeof(visited[0][0])*30*30);
	queue< pair<int,int> >q;
	pair<int,int> p;
	p.first = sr;
	p.second = sc;
	q.push(p);
	visited[sr][sc] = 1;
	while(!q.empty()){
		p = q.front();
		
		if( graph[p.first][p.second] == 'E'){
			res = min(res,visited[p.first][p.second]);
			visited[p.first][p.second] = res;
		}
		else{
			if(check_inside(p.first,p.second+1,e,e) && graph[p.first][p.second+1] != 'T' && visited[p.first][p.second+1] > visited[p.first][p.second]+1){
				q.push(make_pair(p.first,p.second+1));
				visited[p.first][p.second+1] = visited[p.first][p.second]+1;
			}
			if(check_inside(p.first,p.second-1,e,e) && graph[p.first][p.second-1] != 'T' && visited[p.first][p.second-1] > visited[p.first][p.second]+1){
				q.push(make_pair(p.first,p.second-1));
				visited[p.first][p.second-1] = visited[p.first][p.second]+1;
			}
			if(check_inside(p.first+1,p.second,e,e) && graph[p.first+1][p.second] != 'T' && visited[p.first+1][p.second] > visited[p.first][p.second]+1){
				q.push(make_pair(p.first+1,p.second));
				visited[p.first+1][p.second] = visited[p.first][p.second]+1;
			}
			if(check_inside(p.first-1,p.second,e,e) && graph[p.first-1][p.second] != 'T' && visited[p.first-1][p.second] >  visited[p.first][p.second]+1){
				q.push(make_pair(p.first-1,p.second));
				visited[p.first-1][p.second] = visited[p.first][p.second]+1;
			}

		}
	q.pop();	
	}
}

int main(){
	
	scanf("%d",&e);
	
	for(int i = 0 ; i < e;i++){
		for(int j = 0; j < e; j++){
			cin>>graph[i][j];
			if(graph[i][j] == 'S') {sr = i; sc = j;}
			if(graph[i][j] == 'E') {er = i; ec = j;}
		}
	}
	bfs();
	cout<<res-1<<endl;
	return 0;
}
