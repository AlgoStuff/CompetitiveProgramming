/***********************************************************************/
//
//  Name : Rakesh Mahadasa (INFINITUM)
//	National Institute of Technology , Calicut						
//	problem link : 
//	Concept : 
//	Reference :	None
//																		
/***********************************************************************/


//header files

#include<bits/stdc++.h>
using namespace std;


//typedefs and defines

typedef pair<int,int>   pi;
typedef vector< pi >      vpi;
typedef vector<int>     vi;
typedef vector< vi > 	vvi;
typedef long int li;
typedef long long int 	ll;
typedef unsigned long long int ull;

#define pb push_back
#define mp make_pair
#define f first
#define s second
#define sz(a) (int)(a.size())
#define set(a,b) memset(a,b,sizeof(a))
#define gu getchar
#define pu putchar
#define si(n) scanf("%d",&n)
#define sl(n) scanf("%lld",&n)
#define sll(n) scanf("%lld",&n)
#define su(n) scanf("%lld",&n)
#define dout(n) printf("%d\n",n)
#define ldout(n) printf("%ld\n",n)
#define lldout(n) printf("%lld\n",n)
#define udout(n) printf("%d\n",n)
#define rep(a,b) for(int i = a; i < b; i++)

#define TRACE

#ifdef TRACE
#define trace1(x)                cerr << #x << ": " << x << endl;
#define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#define trace5(a, b, c, d, e)    cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl;
#define trace6(a, b, c, d, e, f) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;

#else

#define trace1(x)
#define trace2(x, y)
#define trace3(x, y, z)
#define trace4(a, b, c, d)
#define trace5(a, b, c, d, e)
#define trace6(a, b, c, d, e, f)

#endif

//FILE *fin = freopen("in","r",stdin);
//FILE *fout = freopen("out","w",stdout);

#define MOD7 1000000007
#define MOD9 1000000009
#define PI 3.14159265



ll gcd(ll a,ll b){
	while(b){
		ll temp = b;
		b=a%b;
		a=temp;
	}
	return a;
}





int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		
	}
	return 0;
}
