/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.hackerrank.com/contests/koder-kombat/challenges/next-palindrome
//	Concept : Binary Search , Preprocessing
//	Reference :	None
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

std::vector<int> palin;
void pre(){
	for(int i = 1; i <= 1000000;i++){
		int rev = 0;
		int temp = i;
		while(temp){
			int digit = temp%10;
			rev = rev*10 + digit;
			temp=temp/10;
		}
		if(rev == i){
			palin.push_back(i);
		}
	}
}


int main(){
	pre();
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		cin>>n;
		std::vector<int>::iterator up;
		if(binary_search(palin.begin(),palin.end(),n)) cout<<0<<endl;
		else{
			up = upper_bound(palin.begin(),palin.end(),n);
			int ub = palin[up-palin.begin()];
			cout<<ub-n<<endl;
		}
	}
	return 0;
}