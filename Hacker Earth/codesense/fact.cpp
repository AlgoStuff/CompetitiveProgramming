/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.hackerearth.com/codesense/algorithm/rohit-and-fractions/
//	Concept : Nice Logic
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
typedef long long int lli;
typedef long int li;

#define MOD7 1000000007
#define MOD9 1000000009

using namespace std;


long long int gcd(long long int a,long long int  b){
	if (a==0) return b;
	else if (b == 0) return a;
    while(a!=b){
    	if(a>b){
    		a=a-b;
    	}
    	else{
    		b=b-a;
    	}
    }
    return a;
}


int facts[111];
void f(){
	facts[0]=1;
	for(int i = 1; i <111;i++){
		facts[i] = (facts[i-1]*i)%110;
		//cout<<facts[i]<<" ";
	}
}

long long int power(long long int n){
	int res = 1;
	for(int i = 1; i < n;i++){
		res = (res*n);
	}
	//cout<<res<<endl;
	return res;
}
int main(){
	int t;
	f();
	scanf("%d",&t);
	int c = 1;
	while(c<=t){
		long long int n;
		cin>>n;
		if (n>=111){
			cout<<"Case "<<c<<":"<<"NO"<<endl;
		}
		else{
			if(gcd(facts[n-1],n*n*n*n*n) == 1) 
				cout<<"Case "<<c<<":"<<"YES"<<endl;
			else
				cout<<"Case "<<c<<":"<<"NO"<<endl;
		}
c+=1;
	}
	return 0;
}
