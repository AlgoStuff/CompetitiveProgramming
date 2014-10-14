#include <iostream>
using namespace std;
 
int main() {
 
	bool dp[10001]={0,1,0,1,1,0};
	for(int i=5;i<10001;i++)
	{
		dp[i]= (!dp[i-4]|| !dp[i-1]);
	}
 
	int n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(dp[n])cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
 
}