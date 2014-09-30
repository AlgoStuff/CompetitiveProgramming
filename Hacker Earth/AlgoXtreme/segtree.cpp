/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.hackerearth.com/algoxtreme/algorithm/zeros-in-factorial/
//	Concept : segtree
//	Reference :	 My old code
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
typedef long long int lli;
typedef long int li;

#define MOD7 1000000007
#define MOD9 1000000009

using namespace std;


int zeroes[1000001];
long long int tree[2000001];
 
void build(long int n , long int l ,  long int r){
if ( l > r ) return;
if(l == r){ tree[n] = zeroes[l]; return;}
 
build(2*n , l , (l+r)/2 );
build(2*n+1 , (l+r)/2 + 1 , r);
 
tree[n] = tree[2*n] + tree[2*n+1];
} 

long int query(long int n , long int a ,long int b ,long int i ,long int j){
if(a > b || a > j || b < i) return 0;
if((a >= i && b <= j)) return tree[n];
long int q1 = query( 2*n , a ,(a+b)/2 ,  i ,  j);  
long int q2 = query( 2*n+1 , (a+b)/2 + 1,b,i , j);
return (q1+q2);
}

int zeros(int  n)
{
    int count = 0;
    for (int i=5; n/i>=1; i *= 5)
          count += n/i;
    return count;
}



void pre(){
	for(int i = 1; i <= 1000000; i++){
		zeroes[i] = zeros(i);
	}
}


int main(){
	pre();
	build(1,1,500000);
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		cin>>a>>b;
		cout<<query(1,1,500000,a,b)<<endl;
	}
	return 0;
}
