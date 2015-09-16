/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut							
//	problem link :	http://www.codechef.com/MAY14/problems/RRSTONE													
//	Concept : Logic														
//	Reference :	Pen and Paper													
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
li n,k;

void print(ll aa[]){
	for(int i = 0 ; i < n ; i++) cout<<aa[i]<<" ";
}
int main(){
	ll max = -2000000001;
	ll max1 = -2000000001;

	cin>>n>>k;
	ll a[n];
	for(int i =  0 ; i < n;i++) {
		cin>>a[i];
		max = max < a[i] ? a[i] : max;
	}
	ll copy1[n];
	ll copy2[n];
	for(int i =  0 ; i < n;i++) {
		copy1[i] = max - a[i];
		max1 = max1 < copy1[i] ? copy1[i] : max1;
	}
	for(int i =  0 ; i < n;i++) {
		copy2[i] = max1 - copy1[i];
	}
	if(k==0) print(a);
	else if (k%2 == 1) print(copy1);
	else print(copy2);
	cout<<endl;
	return 0;
}
