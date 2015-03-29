/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/PITTCS15/problems/PCSC2
//	Concept : Fib , Easy
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
	ull a,b,p;
	cin>>a>>b>>p;
	ull res = 2;
	if(p == 1) cout<<a<<endl;
	else if(p == 2) cout<<b<<endl;
	else {
		ull temp = 0;
		while (res<p){
			temp = a+b;
			a = b;
			b = temp;
			res++;
		}
		cout<<temp<<endl;}
		return 0;
	}
