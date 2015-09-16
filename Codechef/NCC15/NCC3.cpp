/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/NCC2015/problems/NCC8
//	Concept : Primes
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

int p[2000001];
void seive(){
	memset(p,0,sizeof(p));
	for(int i = 2; i*i <= 2000000;i++){
		if(p[i] == 0){
			for(int j = i*i ; j <= 2000000;j+=i){
				p[j] = 1;
			}
		}
	}
}


int main(){
	seive();
	int n;
	cin>>n;
	ll a[n];
	std::vector<ll> vp;
	std::vector<ll> vc;
	for(int i = 0; i< n;i++){
		cin>>a[i];
		if(a[i]<=2000000){
			if(p[a[i]]) vc.push_back(a[i]);
			else vp.push_back(a[i]);
		}
		else{
			bool isprime = true;
			for(int j = 2; j*j <= a[i];j++){
				if( a[i]%j == 0){
					isprime = false;
					break;
				}
			}
			if(isprime) vp.push_back(a[i]);
			else vc.push_back(a[i]);
		}
	}
	vector<ll> vres;
	vres.push_back(0);
	vres.push_back(0);
	int cc = vc.size();
	int ccc = 0;
	int cp = vp.size();
	int cpp=0;
	int cres = 2;
	while( (ccc <cc) || (cp<cpp)){
		if(p[cres]){
			if(ccc < cc){
				vres.push_back(vc[ccc]);
				ccc++;
			}
			else
				vres.push_back(0);
		}
		else{
			if(cpp < cp){
				vres.push_back(vp[cpp]);
				cpp++;
			}
			else
				vres.push_back(0);
		}
		cres+=1;
	}
	cres = vres.size();
	for(int i = 0; i < cres;i++){
		cout<<vres[i]<<" ";
	}
	cout<<endl;
	return 0;
}
