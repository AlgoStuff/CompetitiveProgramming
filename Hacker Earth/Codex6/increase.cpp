    
    /***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.hackerearth.com/codex-6-0/algorithm/dummy-15/
//	Concept : DP , LIS
//	Reference1 :	http://stackoverflow.com/questions/21048600/minimum-no-of-changes-required-to-make-array-strictly-increasing
//  Reference2 :	http://stackoverflow.com/questions/21143236/minimum-changes-required-to-make-a-given-array-strictly-increasing
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
#define x first
#define y second

using namespace std;

ll gcd(ll a,ll b){
	while(b){
		ll temp = b;
		b=a%b;
		a=temp;
	}
	return a;
}


int F[1000001],n;
int num[1000001], rrank[1000001],a[1000001],f[1000001];
void Add(int x, int d) { for (; x <= n; x += (x & -x)) F[x] = max(F[x], d); }
int Sub(int x) { int ans = 0; for (; x; x -= (x & -x)) ans = max(F[x], ans); return ans; }


int main( )
{
	int t;
	cin>>t;
	while(t--){
		memset(F,0,sizeof(F));
		memset(num,0,sizeof(num));
		memset(rrank,0,sizeof(rrank));
		memset(a,0,sizeof(a));
		memset(f,0,sizeof(f));
		n=0;
		pair<int, int> p[1000001];
		
		int top = 0, Max = 1;
		scanf("%d", &n);
		for (int i = 1; i <= n; i ++)
		{
			scanf("%d", &a[i]);
			p[i].x = a[i] - i, p[i].y = i;
		}
		sort(p + 1, p + 1 + n);
		rrank[1] = ++ top;
		for (int i = 2; i <= n; i ++)
			if (p[i].x != p[i - 1].x) rrank[i] = ++ top;
		else rrank[i] = top;
		for (int i = 1; i <= n; i ++)
			num[p[i].y] = rrank[i];
		for (int i = 1; i <= n; i ++)
			if (a[i] >= i)
			{
				f[i] = Sub(num[i]) + 1;
				Add(num[i], f[i]);
				Max = max(Max, f[i]);
			}
			printf("%d\n", n - Max);
		}
		return 0;
	} 