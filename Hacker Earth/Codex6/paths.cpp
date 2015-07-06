/***********************************************************************/
//                                                                          
//  INFINITUM                                                           
//  Rakesh Mahadasa                                                     
//  National Institute of Technology , Calicut                      
//  problem link : https://www.hackerearth.com/codex-6-0/algorithm/dummy-4-1/
//  Concept : DFS , Paths
//  Reference : None
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

int n;
int v[101][101];
int mat[101][101];
int res = 0;
int dfs(int x,int y){
    if(v[x][y]) return 0;
    if(x==n-1 && y == n-1) {
        res++;
        return 0;
    }
    v[x][y] = 1;
    if(x+1<n && mat[x+1][y]==0){
        int chk = dfs(x+1,y);
        if(chk) v[x+1][y]=0;
    }
    if(x-1>=0&&mat[x-1][y]==0){
        int chk =  dfs(x-1,y);
        if(chk)  v[x-1][y]=0;
    }
    if(y+1<n&&mat[x][y+1]==0){
        int chk =  dfs(x,y+1);
        if(chk) v[x][y+1]=0;
    }
    if(y-1>=0&&mat[x][y-1]==0){
        int chk =  dfs(x,y-1);
        if(chk) v[x][y-1]=0;
    }
    return 1;
}


int main(){
    cin>>n;

    for(int i = 0; i < n;i++){
        for(int j = 0; j < n;j++){
            cin>>mat[i][j];
            v[i][j]=0;
        }
    }
    dfs(0,0);
    cout<<res<<endl;

    return 0;
}
