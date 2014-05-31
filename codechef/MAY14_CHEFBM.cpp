/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut							
//	problem link :	http://www.codechef.com/MAY14/problems/CHEFBM												
//	Concept :	Logic														
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

bool compare_pair(pair < int , int > a , pair < int ,  int > b){
	if(a.first == b.first) return a.second < b.second;
	else return a.first < b.first;
}
int main(){
	int n,m,p,cnt=0;
	vector< pair<int , int > > points(500000);
	cin>>n>>m>>p;
	int rows[500000] = {0}; 
	while(cnt<p){
		cin>>points[cnt].first>>points[cnt].second;
		rows[points[cnt].first]++;
		cnt++;
	}
	sort(points.begin(),points.end(),compare_pair);
	cnt = 0;
	while ( cnt < p){
		cout<<cnt<<endl;
		int hash[500000] = {0};
		int res = 0;
		set<int> cols;
		while(rows[points[cnt].first]--){
			cols.insert(points[cnt].second);
			hash[points[cnt].second]++;
			cnt++;
		}
		rows[points[cnt].first] = 0;
		for(set <int>::iterator it = cols.begin(); it != cols.end() ; ++it){
			if(*it == 1){
				if(hash[2] <= hash[1]) {rows[points[cnt].first] = -1; break;}
			}
			else if(*it == m){
				rows[points[cnt].first] += (rows[points[cnt].first] - rows[points[cnt].first-1]);
			}
			else{
				if( hash[points[cnt].first] >= hash[points[cnt].first-1] && hash[points[cnt].first] <= hash[points[cnt].first+1] ){
					rows[points[cnt].first] += (rows[points[cnt].first] - rows[points[cnt].first-1]);
				}
				else{
					rows[points[cnt].first] = -1; break;
				}
			}
		}
	c	nt++;
	}
	for(int i = 1; i <=n ;i++){
		if(rows[i] == -1) cout<<-1<<endl;
		else cout<<rows[i]+m-1<<endl;
	}
	return 0;
}
