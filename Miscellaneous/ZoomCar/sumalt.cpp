
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
ll a[10000001];
int main(){
	int t;
	cin>>t;
	while(t--){
		li n;
		cin>>n;
		for(li i = 0; i < n;i++){
			cin>>a[i];
		}
		ll inc = a[0];
		ll exc = 0;
		ll temp;

		for(li i = 1; i < n;i++){
			temp = inc>exc?inc:exc;
			inc = exc+a[i];
			exc=temp;
		}
		ll res = inc>exc?inc:exc;
		cout<<res<<endl;

	}
}