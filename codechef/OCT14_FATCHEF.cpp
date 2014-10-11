/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/OCT14/problems/FATCHEF
//	Concept : Ad Hoc
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



bool compare(pair<char , int > a, pair <char,int > b){
	if(a.second < b.second) return true;
	else return false;
}


int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d %d",&n,&m);
		char col[100001];
		memset(col,'?',sizeof(col));
		char temp;
		int pos;
		int min_pos = 100001;
		for(int i = 0; i < m; i++){
			cin>>temp;
			scanf("%d",&pos);
			col[pos] = temp;
			if(min_pos > pos) min_pos = pos;
		}
		lli res = 1;
		for(int i = min_pos+1; i <= n;i++){
			if(col[i]!='?' && col[i] != col[min_pos]){
				res = (res*(i-min_pos))%MOD9;
				min_pos = i;
			}
			else if (col[i] == col[min_pos]){
				min_pos = i;
			}
		}
		printf("%lld\n", res);
	}
	return 0;
}
