    
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


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;s
		cin>>n;
		int a[n];
		for(int i = 0; i < n;i++){
			cin>>a[i];
		}
		vector<ll> v(100001,2000000001);
		for(int i = 0;i<n;i++){
			if(a[i]>i){
				
				vector<ll>::iterator it = upper_bound(v.begin(),v.end(),a[i]-i);
				*it = a[i]-i;
			}
		}
		cout<<n-(find(v.begin(),v.end(),2000000001)-v.begin())<<endl;
	}
}