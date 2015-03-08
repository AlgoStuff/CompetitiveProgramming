/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.hackerearth.com/codemyca/algorithm/army/
//	Concept : Hashing
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
	int n;
	cin>>n;
	int a[100001][10];
	memset(a,0,sizeof(a[0][0])*100001*10);
	for(int i = 1; i <=n;i++){
		int temp = i;
		while(temp){
			int rem = temp%10;
			a[i][rem]=1;
			temp = temp/10;
		}
	}



	int q;
	cin>>q;
	while(q--){
		int count[100001]={0};
		int m;
		cin>>m;
		int res=0;
		while(m--){

			int j;
			cin>>j;
			for(int i = 1; i <= n;i++){
				if(a[i][j]==1 && count[i]==0){res+=1;count[i]=1;}
			}
			
		}
		cout<<res<<endl;
	}
	return 0;
}
