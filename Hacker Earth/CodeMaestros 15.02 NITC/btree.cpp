/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.hackerearth.com/cm1502/algorithm/asif-and-chocolates/
//	Concept : Heap Traversal
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

int dist(int a,int b){
	int dist=0;
	if(a<b){
		int temp = a;
		a=b;
		b=temp;
	}
	while(a){
		if(a==b) return dist;
		
		a=a/2;
		if(a)dist++;
	}
	while(b){
		
		b=b/2;
		if(b)dist++;
	}
	return dist;
}


int main(){
	int n;
	cin>>n;
	set <int> a;
	int q;
	cin>>q;
	while(q--){
		int c;
		cin>>c;
		if(c){
			int node;
			cin>>node;
			a.insert(node);
		}
		else{
			int root;
			cin>>root;
			long long int res=0;
			for(set<int>::iterator it=a.begin(); it !=a.end(); ++it){
				
				res+=dist(root,*it);

			}
			cout<<2*res<<endl;
		}
	}
	return 0;
}
