/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/OCT14/problems/SEATSR
//	Concept : Limited Levenshtein distance
//	Reference :	http://www.codeproject.com/Articles/362182/Memory-and-time-efficient-Levenshtein-algorithm
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

string s1,s2;
int a, b,k,l1,l2;
ull dist[2][100001];

int solve(){
	memset(dist,0,sizeof(dist[0][0])*200002);
	
	for(int i = 1;i <=l2;i++){
		dist[0][i] = i;
	}
	int current_row = 1;
	bool exceed_limit=false;

	for(int i =1; i <= l1;i++){
		exceed_limit=true;
		dist[current_row][0] = i;

		if(i-k>=1)
			dist[current_row][i-k-1]=99999999;
		for(int j=max(i-k,1);j<=min(i+k,l2);j++)
		{
			if(s1[i-1]==s2[j-1])
				dist[current_row][j]=dist[1- current_row][j-1];
			else
				dist[current_row][j]=min( dist[1-current_row][ j-1]+b, min(dist[1- current_row][ j]+a, dist[ current_row][j-1]+a));
			if( dist[ current_row][ j]<= k)
				exceed_limit = false;
		}
		if( i+ k<= l2)
		{
			dist[ current_row][ i+ k+1]=99999999;
		}
		if(exceed_limit)
		{
			return -1;
		}
		current_row=1- current_row;
	}
	if(dist[1-current_row][l2]>k)return -1;
	return dist[1-current_row][l2];

}


int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		cin>>s1>>s2;
		scanf("%d %d %d",&a,&b,&k);
		l1=s1.length();
		l2=s2.length();
		if(s1==s2 || a==0) printf("0\n");
		else if(l1==l2 && b==0) printf("0\n");
		else if(l1>l2 && (l1-l2)*a > k) printf("-1\n");
		else if(l1<l2 && (l2-l1)*a > k) printf("-1\n");
		else printf("%d\n",solve());
	}
	return 0;
}
