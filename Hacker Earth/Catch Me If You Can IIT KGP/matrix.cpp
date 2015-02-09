/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.hackerearth.com/cmiyc-ktj15/algorithm/diti-and-friends-4/
//	Concept : AdHoc
//	Reference :	None
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


using namespace std;

ll gcd(ll a,ll b){
	while(b){
		ll temp = b;
		b=a%b;
		a=temp;
	}
	return a;
}


int a[101][101];
int n,m;
int res = 0;

bool check(){
	for(int i =0;i<n;i++){
		for(int j = 0; j < m;j++){
			if(a[i][j]==1){
				if(i+1<n) a[i+1][j]=1;
				if(i-1>=0)a[i-1][j]=1;
				if(j+1<m)a[i][j+1]=1;
				if(j-1>=0)a[i][j-1]=1;
			}
		}
	}
	bool ans = true;
	for(int i =0;i<n;i++){
		for(int j = 0; j < m;j++){
			if(a[i][j]==0) {
				ans = false;
				res++;
				a[i][j]=1;
				if(i+1<n) a[i+1][j]=1;
				if(i-1>=0)a[i-1][j]=1;
				if(j+1<m)a[i][j+1]=1;
				if(j-1>=0)a[i][j-1]=1;
			}
		}
	}
	 return ans;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		cin>>n>>m;
		res = 0;
		char c;
		for(int i = 0; i < n;i++){
			for(int j = 0; j < m;j++){
				
				cin>>c;
				a[i][j] = c-'0';
			}
		}
		bool suff = check();	
		if(suff) cout<<"yes ";
		else cout<<"no ";
		cout<<res<<endl;

	}
	return 0;
}
