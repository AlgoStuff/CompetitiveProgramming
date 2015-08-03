/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.hackerrank.com/contests/countercode/challenges/campers
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

int b[2000001];
int a[1000001];

int main(){
	int n,k;
	cin>>n>>k;
	
	for(int i = 0; i < k;i++){
		cin>>a[i];
	}
	sort(a,a+k);
	for(int i  = 0; i <=n;i++){
		b[i]=1;
	}
	int res = 0;

	for(int i = 0; i <k;i++){
		if(a[i]-1>=1) b[a[i]-1]=0;
		b[a[i]+1]=0;
		b[a[i]]=0;
	}
	int chk = 0;
	for(int i = 1;i<=n;i++){
		if(b[i]==1)chk++;
		if(b[i]==0){
			res+=((chk+1)/2);
			chk=0;
		}
	}
	cout<<res+((chk+1)/2)+k<<endl;
	return 0;
}
