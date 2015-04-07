/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/BTCJ2015/problems/BITCJ4
//	Concept : Hashing , DP
//	Reference :	None
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


bool compare(pair<char , int > p1 , pair <char , int> p2){
	if(p1.second<p2.second) return true;
	if(p1.second == p2.second) return p1.first<p2.first;
	return false;
}	

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		string s;
		cin>>s;
		std::map<char, int> freq;
		for(int i = 0; i < 26;i++){
			char temp = 97+i;
			freq.insert(pair<char,int>(temp,0));
		}
		int l = s.length();
		for(int i = 0; i < l;i++){
			freq[s[i]]+=1;
		}
		std::vector< pair<char,int> > v;
		for(map<char,int>::iterator it = freq.begin(); it != freq.end();++it){
			v.push_back(pair<char,int>(it->first,it->second));
		}
		sort(v.begin(),v.end(),compare);
		for(vector<pair<char,int> >::iterator it = v.begin(); it != v.end();++it){
			cout<<it->first<<" "<<it->second<<endl;
		}
	}
	return 0;
}
