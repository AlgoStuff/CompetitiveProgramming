/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.hackerearth.com/codemyca/algorithm/simple-task/
//	Concept : Maths
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




int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		cin>>n;
		ll a[n];
		for(int i = 0; i < n;i++){
			cin>>a[i];
		}
		ll total=0;
		for(int i = 0; i < n-1;i++){
			total+=abs(a[i]-a[i+1]);
		}
		ll res = total;
		int minpos = 0;
		for(int i = 0; i < n;i++){
			ll curr;
			if(i==0 && n>1) curr = total - abs(a[1]-a[0]);
			else if(i==0 && n==1) curr = -1;
			else if(i==n-1 && n>1) curr = total - abs(a[i]-a[i-1]);
			else{
				curr = total - abs(a[i]-a[i-1]) - abs(a[i]-a[i+1]) + abs(a[i+1]-a[i-1]);
			}
			if(curr<res){
				res = curr;
				minpos = i;
			}
		}
		cout<<minpos<<endl;

	}
	return 0;
}
