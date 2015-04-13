
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

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll a[100001][2];
		for(int i = 0;i<n;i++){
			cin>>a[i][0]>>a[i][1];
		}
		ll l,p;
		cin>>l>>p;
		for(int i = 0; i <n;i++){
			a[i][0] = l-a[i][0];
		}
		int curr = l-p;
		int res=0;
		for(int i = n;i>=0;i--){
		    if(a[i][0]<=curr){
		        curr=curr+a[i][1];
		        res++;
		    }
		    if(curr>l)break;
		}
    cout<<res<<endl;
	}
}