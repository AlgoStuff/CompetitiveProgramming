/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/COOK48/submit/RRCOPY
//	Concept : Ad Hoc
//	Reference : None
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

ull gcd(ull a , ull b){
	if(a == 0 || b == 0) return 1;
	while(a != b){
		if(a > b) a = a - b;
		else b = b - a;
	}
	return a;
}



int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int hash[100001] = {0};
		int size;
		cin>>size;
		int res = 0;
		for(int i = 0 ; i < size;i++){
			int ele;
			cin>>ele;
			if(!hash[ele]){
				hash[ele] = 1;
				res++;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}