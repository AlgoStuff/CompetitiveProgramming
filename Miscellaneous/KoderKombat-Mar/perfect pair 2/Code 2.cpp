#include<iostream>
#include <vector>
#include <stack>
#include <math.h>
#define mod 1000000007
using namespace std ;
vector<long> d;
vector<long> sum;

long long powcomp(int n,int k){
	if(n==0) 
		return 1;
	if(n%2==0){
		long long x;
		x=powcomp(n/2,k);
		return (x*x)%mod;
	}
	else{
		long long x;
		x=(k*(powcomp(n-1,k)))%mod;
		return x;
	}
	return 0;	
}
long long comp(int n,int k){
	long long temp=0,x;
	int sizep,sizea,i;
	if(n==1)
		x=k;
	else{
		for(i=0;d[i]<n;i++){
			if(n%d[i]==0){
				temp=(temp+sum[i])%mod;	
			}
		}
		x=powcomp(n,k);;
		if(x<temp){
			x=(x+mod-temp)%mod;
		}
		else x=(x-temp);
	}
	return x;
}

long getNumber(long n,long k){
	long i,j,temp=1,var,value=0;
	stack <long> s;
	
	for(i=1;i<sqrt(n);i++){
		
		if(n%i==0){
			d.push_back(i);
			s.push(n/i);
			var=comp(i,k);
			sum.push_back(var);
			value=(value+(i*var)%mod)%mod;
		}
			 
	}
	if(sqrt(n)-i==0){
		d.push_back(sqrt(n));
		
		var=comp(i,k);
		sum.push_back(var);
		value=(value+(i*var)%mod)%mod;
	}
	while(!s.empty()){
		temp=s.top();
		s.pop();
		d.push_back(temp);
		var=comp(temp,k);
		sum.push_back(var);
		value=(value+(temp*var)%mod)%mod;
	}
	return value;
}
int main(){

	long n,k,sizep,sizea;
	cin >> n >> k;
	
	long answer;
	answer=getNumber(n,k);
	cout << answer << endl;
	
	return 0;
	
}
