#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cassert>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cstdlib>

using namespace std;

int a[1000][1000];
long sum[1000][1000];
	
int main(){
	int n,m;
		cin>>n>>m;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cin>>a[i][j];
			}
		}
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				sum[i][j] = a[i][j];
				if(j > 0 && sum[i][j] < a[i][j] + sum[i][j-1])
					sum[i][j] = a[i][j] + sum[i][j-1];
				if(i > 0 && sum[i][j] < a[i][j] + sum[i-1][j])
					sum[i][j] = a[i][j] + sum[i-1][j];
			}
		}
		cout<<sum[n-1][m-1]<<"\n";
	return 0;
}