
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

int gold[101][101];

int add(int x,int y,int coin_count){
	if(gold[x][y] == 1)coin_count++;
	if(x<0 || y<0){
		return -1;
	}
	else if(x == 0 && y == 0) return coin_count;
	else{
		return max(coin_count,max(add(x,y-1,coin_count),add(x-1,y,coin_count)));
	}

}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i =0;i<n;i++){
			for(int j =0; j <n;j++){
				cin>>gold[i][j];
			}
		}
		int dp[101][101];
		int coin_count = 0;
		for(int i = n-1; i >=0;i--){
			coin_count += gold[i][n-1];
			dp[i][n-1] = coin_count;
		}
		coin_count=0;
		for(int i = n-1; i >=0;i--){
			coin_count += gold[n-1][i];
			dp[n-1][i] = coin_count;
		}

		for(int i = n-2;i>=0;i--){
			for(int j = n-2;j>=0;j--){
				dp[i][j] = max(dp[i+1][j],dp[i][j+1])+gold[i][j];
			}
		}
		cout<<dp[0][0]<<endl;

	}
	return 0;
}