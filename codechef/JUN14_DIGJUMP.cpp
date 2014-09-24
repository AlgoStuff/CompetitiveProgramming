/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/JUNE14/problems/DIGJUMP 
//	Concept : sub problems , Greedy , DP
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
string s;

int main(){
	cin>>s;
	int len = s.length();
	int dis[len];
	dis[0] = len-1;
	dis[len-1] = 0;
	int mini[10];
	memset(mini,1000000,sizeof(mini));
	for(int i = 0;i< len;i++){
		mini[s[i]-'0'] = mini[s[i]-'0']>len-i-1?len-i-1:mini[s[i]-'0'];
		dis[i] = len-i-1;
	}
	for(int i = len-2; i >= 0;i--){
		if(s[i] == s[len-1])
			mini[s[i] = min(min(1+mini[s[i-1]-'0'] , mini[s[i] - '0']) ,1+mini[s[i-+1]-'0'] );
	}
	for(int i = 1; i < len-1;i++){
		res = min(res,mini[s[i] - '0']);
	}
	cout<<res<<endl;
	return 0;
}
