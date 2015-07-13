#include<iostream>
#include<string.h>
using namespace std;

int recurr_lcs(string s1,string s2,int l1,int l2){
	int s1_len = s1.length();
	int s2_len = s2.length();
	if (l1>=s1_len) return 0;
	if (l2 >= s2_len) return 0;

	if(s1[l1] == s2[l2]){
		return (1+ recurr_lcs(s1,s2,l1+1,l2+1));
	}
	else{
		return max(recurr_lcs(s1,s2,l1+1,l2),recurr_lcs(s1,s2,l1,l2+1));
	}
}


int dp_lcs(string s1,string s2){
	int l1 = s1.length();
	int l2 = s2.length();
	int dp[1001][1001];
	for(int i = 0; i < l1;i++){
		dp[i][0]=0;
	}
	for(int i = 0 ; i < l2;i++){
		dp[0][i] = 0;
	}

	for(int i = 1;i <= l1;i++){
		for(int j = 1; j <= l2;j++){
			if(s1[i-1]==s2[j-1]){
				dp[i][j] = dp[i-1][j-1]+1;
			}
			else{
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	return dp[l1][l2];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		cout<<recurr_lcs(s1,s2,0,0)<<endl;
		cout<<dp_lcs(s1,s2)<<endl;
	}
}