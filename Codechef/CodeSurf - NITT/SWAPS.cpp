/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/CDSU2015/problems/SWAPS
//	Concept : AdHoc
//	Reference :	http://en.wikipedia.org/wiki/Maximum_subarray_problem
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

int start = 0, end = 0;
int kadane(int s[],int len){
	int curr_start = 0;
	int max_ending_here = 0,max_so_far = 0;
	for(int i = 0; i < len;i++){
		int x = s[i];
		if(max_ending_here+x<0) {
			max_ending_here = 0;
			curr_start = i+1;
		}
		else{
			max_ending_here = max_ending_here+x;
		}
		if(max_so_far < max_ending_here) {start = curr_start; end = i; max_so_far= max_ending_here;}
	}
	return max_so_far;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		start = 0;
		end = 0;
		string s;
		cin>>s;
		int len = s.length();
		int a[len];
		int n = len;
		int on=0;
		for(int i = 0; i < len;i++){
			if(s[i] == '1') {on++; a[i] = -1;}
			else {a[i] = 1;}
		}
		int res1=0,res2=0,res3=0,res4=0;
		res1 = kadane(a,len);
		//cout<<start<<" "<<end<<endl;
		for(int i = 0; i < start;i++){
			if(s[i]=='1') res2++;
		}
		for(int i = end+1; i < n;i++){
			if(s[i]=='1') res3++;
		}
		for(int i = start; i <=end;i++){
			if(s[i]=='1') res4++;
		}
		if(start==0 && end == 0)
		{
			if(s[0]=='1')
			cout<<on<<endl;
			else
			cout<<on+1<<endl;
		}
		else
		cout<<res1+res2+res3+res4<<endl;
	}
	return 0;
}
