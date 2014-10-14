/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : 
//	Concept : 
//	Reference :	
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


bool visited[301][301];
char maps[301][301];
int logic[301][301];

int n;

bool ismine(int r,int c){
	if((r>0 && maps[r-1][c]=='*')||
		(c>0 && maps[r][c-1]=='*')||
		(r<n-1 && maps[r+1][c]=='*')||
		(c<n-1 && maps[r][c+1]=='*')||
		(r>0&&c>0&&maps[r-1][c-1]=='*')||
		(r<n-1&&c<n-1&&maps[r+1][c+1]=='*')||
		(r>0&&c<n-1&&maps[r-1][c+1]=='*')||
		(r<n-1&&c>0&&maps[r+1][c-1]=='*')
		){
		return true;
}
else 
	return false;
}

bool is_sav(int r,int c){
	if(
		(r>0 && logic[r-1][c]==0)||
		(c>0 && logic[r][c-1]==0)||
		(r<n-1 && logic[r+1][c]==0)||
		(c<n-1 && logic[r][c+1]==0)||
		(r>0&&c>0&&logic[r-1][c-1]==0)||
		(r<n-1&&c<n-1&&logic[r+1][c+1]==0)||
		(r>0&&c<n-1&&logic[r-1][c+1]==0)||
		(r<n-1&&c>0&&logic[r+1][c-1]==0)
		)
	{
		return true;
	}
	else 
		return false;
}


	int main(){
		int t;
		scanf("%d",&t);
		int c = 1;
		while(c<=t){
			memset(visited,false,visited[0][0]*301*301);
			int res = 0;
			cin>>n;
			for(int i = 0; i < n; i++){
				for(int j = 0; j < n;j++){
					cin>>maps[i][j];
					if(maps[i][j]=='*')logic[i][j]=2;
					else logic[i][j]=1;
				}
			}
			for(int i = 0; i < n; i++){
				for(int j = 0; j < n;j++){
					if(!ismine(i,j)&&maps[i][j]!='*'&&!is_sav(i,j)){
						logic[i][j]=0;//cout<<i<<" "<<j<<endl;
						res++;
					}
					if(!ismine(i,j)&&maps[i][j]!='*'&&is_sav(i,j)){
						logic[i][j]=0;
					}
				}
			}
			//cout<<res<<endl;
			for(int i = 0; i < n; i++){
				for(int j = 0; j < n;j++){
					if(is_sav(i,j) && logic[i][j]!=0&&maps[i][j]!='*'){
						logic[i][j]=2;
					}
				}
			}
			for(int i = 0; i < n; i++){
				for(int j = 0; j < n;j++){
					if(logic[i][j]==1){
						res++;
					}
				}
			}
			cout<<"Case #"<<c<<": "<<res<<endl;
			c++;
		}
		return 0;
	}
