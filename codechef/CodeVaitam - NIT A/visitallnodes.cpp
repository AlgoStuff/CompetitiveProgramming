/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : www.codechef.com/CDVA2015/problems/CDVA1507
//	Concept : BackTracking
//	Reference :	http://discuss.codechef.com/questions/11175/shortest-path-in-a-graph-visiting-all-nodes-atleast-once
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


int backtrack(int edgecount,int from[],int to[],int d[],int curr_node,int v[]){
	int res = 0;
	for(int i =0; i<edgecount;i++){
		if(from[i]==curr_node&&v[to[i]]!=1){
			v[to[i]]=1;
			res=max(res,d[i]+backtrack(edgecount,from,to,d,to[i],v));
		}
		else if(to[i]==curr_node&&v[from[i]]!=1){
			v[from[i]]=1;
			res=max(res,d[i]+backtrack(edgecount,from,to,d,from[i],v));
		}
	}
	return res;
}

int main(){
	int n;
	cin>>n;
	int from[n],to[n],d[n],v[n];
	for(int i = 0 ;i < n-1;i++){
		cin>>from[i]>>to[i]>>d[i];
		v[i+1]=0;
	}
	int result;
	v[1]=1;
	result = -backtrack(n-1,from,to,d,1,v);
	//cout<<result<<endl;
	for(int i = 0; i < n-1;i++){
		result+=2*d[i];
	}
	cout<<result<<endl;
	return 0;
}
