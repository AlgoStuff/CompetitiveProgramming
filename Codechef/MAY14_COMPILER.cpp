/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut							
//	problem link : http://www.codechef.com/MAY14/problems/COMPILER		
//	Concept : Simple Dynamic programming , Stack used					
//	Reference : http://n00tc0d3r.blogspot.com/2013/04/longest-valid-parentheses.html
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
 
#define MOD 0
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
 
 
int main(){
	int t;
	cin>>t;
	while(t--){
		stack <li> box;
		string braces;
		cin>>braces;
		li latest = -1;
		li res = 0;
		li ans = 0;
		li len = braces.length();
		for(int i = 0 ; i < len ; i++){
			if(braces[i] == '<') box.push(i);
			else{
				if (box.empty())
				{
					latest = i;
					ans = res;
					break;
				}
				else{
					box.pop();
					if (box.empty())
					{
						res = res > i-latest ? res:i-latest;
						ans = res;
					}
					else{
						res = res > box.top() ? res:i-box.top();
					}
				}
			}
		}
		cout<<ans<<endl;
		
 
	}  
	return 0;
}
 