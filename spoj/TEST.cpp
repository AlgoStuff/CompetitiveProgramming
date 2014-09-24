/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/JUNE14/problems/DIGJUMP 
//	Concept : Logic
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


int main() 
{
	string s;
	int res[100001];
	cin>>s;
	int len = s.length();
	int pos[10];
	memset(pos,-1,size(pos));
	l = s[0]-'0';
	pos[l] = 0;
	a[0] = 0;
	for(int j = 1;j<len;j++)
	{
		l = s[j] - '0';
		if(pos[l]!=-1) {
			a[j] = min( a[j-1]+1 , a[pos[l]] + 1);
			if((a[pos[l]]+1) > (a[j-1]+1))
				pos[l] = j;
		}
		else a[j] = a[j-1]+1;
		int p=j-1;
		int q=j;
		for(int p=j-1,q=j;p>=0 && q>=1;p--,q--)
		{
			if(a[p]>(a[q]+1))
				a[p] = a[q]+1;
			else
				break;
		}
		if(pos[l] == -1)
			pos[l] = j;
	}
	cout<<res<<a[size-1]<<endl;
	return 0;
}