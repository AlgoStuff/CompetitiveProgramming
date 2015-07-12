#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<string.h>
#include<stdio.h>
typedef long long int ll;

using namespace std;

//RECURSIVE SOLUTION
//COMPLEXITY : EXPONENTIAL , O(2^n) 
ll recurr_lis(ll a[],ll start,ll end, ll max){

	//After reaching end of the given list
	if(start > end) return 0;

	
	//Just Exclude the current element and continue the sequence
	ll lis1 = recurr_lis(a,start+1,end,max);
	ll lis2 = 0;
	

	//Cases for Including current element 
	//1. Start new sequence with curr element as starting element
	//2. Include the curr element if current max is less than current element

	if (a[start] >= max || max == 1000000001){
		lis2 = 1+recurr_lis(a,start+1,end,a[start]);
	}

	return lis1>lis2?lis1:lis2;
	
}


//DP SOLUTION  
//MEMOIZATION : COMPLEXITY : O(n^2)

ll dp_lis(ll a[],int size){
	ll max[1000001]={0};
	max[size-1]=1;
	for(int i = size-2; i >= 0; i--){
		ll curr_max = -1;
		for(int j = i; j < size;j++){
			if(a[i]<a[j] && 1+max[j]>curr_max){
				curr_max = 1+max[j];
			}
		}
		if(curr_max > max[i]) max[i] = curr_max;
	}
	ll res = -1;
	for(int i = 0; i < size;i++){
		if(max[i]>res) res=max[i];
	}
	return res;
}


// O(nlogn) Solution
ll fast_lis(ll a[],int size){
	std::vector<ll> v(1000001,1000000001);
	for(int i = 0; i < size;i++){
		vector<ll>::iterator it = upper_bound(v.begin(),v.end(),a[i]);
		cout<<it-v.begin()<<endl;
		*it = a[i];
	}
	for(int i = 0; i < size;i++){
		if(v[i]==1000000001) return i;
	}
	return size;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll a[n];
		for(int i = 0; i < n;i++){
			cin>>a[i];
		}
		cout<<recurr_lis(a,0,n-1,1000000001)<<endl;
		cout<<dp_lis(a,n)<<endl;
		cout<<fast_lis(a,n)<<endl;
	}
}