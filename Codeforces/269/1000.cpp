/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://codeforces.com/contest/471/problem/B
//	Concept : Permutations and Combinations
//	Reference :	None
//																		
/***********************************************************************/


//header files

#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<iomanip>
#include<cmath>
#include<set>
#include<map>
#include<ctime>

//typedefs

typedef unsigned long long int ull;
typedef long long int lli;
typedef long int li;

#define MOD7 1000000007
#define MOD9 1000000009

using namespace std;


bool compare(int a,int b){
	if(a>b) return true;
	else return false;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int h[2001] = {0};
	int hb[2001] = {0};
	for(int i = 0 ; i < n; i++){
		cin>>a[i];
		h[a[i]]++;
		hb[a[i]]++;
	}
	sort(h,h+2001,compare);
	if(h[0]<2) cout<<"NO"<<endl;
	else{
		if(h[0] == 2 && h[1]<2) cout<<"NO"<<endl;
		else{
			cout<<"YES"<<endl;
			int rep1 = 0; 
			int rep2 = 0;
			
		}
	}
	return 0;
}
