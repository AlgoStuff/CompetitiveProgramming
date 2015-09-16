/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/PITTCS15/problems/PCSC3
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




int main(){
	ull n;
	cin>>n;
	for(int i = 0;i<n;i++){
		for(int j = 0; j < 2*n;j++){
			if(j >= i && j<= 2*n-i-1) cout<<"*";
			else cout<<"-";
		}
		cout<<endl;
	}

	for(int i = n-1;i>=0;i--){
		for(int j = 0; j < 2*n;j++){
			if(i == 0)cout<<"*";
			else{
				if(j == i || j == 2*n-i-1) cout<<"*";
				else cout<<"-";}
			}
			cout<<endl;
		}
	}
