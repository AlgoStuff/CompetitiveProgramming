/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.hackerrank.com/contests/countercode/challenges/poisonous-plants
//	Concept : memoization
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


int bruteforce(ll a[],int n){
	int b[100001]={0};
	int res=0;
	while(true){
		int over = 1;
		res+=1;
		ll prev = a[0];
		for(int i = 1; i < n;i++){
			if (b[i-1]==0) prev = a[i-1];
			if(a[i]>=prev and b[i]!=1){
				over = 0;
				b[i]=1;
			}
		}
		for(int i = 0; i<n;i++){
			if(b[i]==0)cout<<a[i]<<" ";
		}
		cout<<endl;
		if (over) break;
	}
	return res;
}

int main(){
	int n;
	cin>>n;
	ll a[n];
	for(int i = 0; i < n;i++){
		cin>>a[i];
	}
	int res = 0;
	ll currmin = a[0]; 
	int currmax = 0;
	for(int i = 1; i < n;i++){
		if(a[i]<a[i-1]){
			if(a[i]<currmin){
				currmin = a[i];
				currmax = 0;
			}
			else if (a[i]==currmin){
				currmax+=1;
				res = max(currmax,res);
				currmax=0;
			}
			else{
				currmax+=1;
			}
		}
		else if(a[i]==a[i-1]){
			if(a[i]>currmin)currmax+=1;
			if(a[i]==currmin){
				currmax+=1;
				res = max(currmax,res);
				currmax=0;
			}
			if(a[i]<currmin){currmin=a[i];
				currmax=0;}
		}
		res = max(currmax,res);
	//cout<<currmin<<" "<<currmax<<" "<<res<<endl;
	}
	int dec = 0;
	for(int i = 1; i < n;i++){
		if(a[i]>=a[i-1]){
			dec=1;
			break;
		}
	}
	if(dec==0)cout<<0<<endl;
	else{cout<<res+1<<endl;}
//cout<<bruteforce(a,n)<<endl;
}
