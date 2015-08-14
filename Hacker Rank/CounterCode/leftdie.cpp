/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.hackerrank.com/contests/countercode/challenges/poisonous-plants
//	Concept : Stack
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

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n;i++){
		cin>>a[i];
	}
	int res = 0;
	int is_dec = 0;
	stack<pair<int,int> >s;
	for(int i = 0; i < n;i++){
		if(s.empty()){
			cout<<"PUSH : "<<a[i]<<" DAY : "<<0<<endl;
			s.push(make_pair(a[i],0));
		}
		else{
			pair <int,int> curr_pair = s.top();
			int curr_elem = curr_pair.first;
			int curr_cnt = curr_pair.second;
			if(a[i]<=curr_elem){
				while(true){
					if(curr_pair.first<a[i])
						break;
					else{
						
							curr_cnt = curr_pair.second;
						
						cout<<"POP : "<<curr_pair.first<<" DAY : "<<curr_pair.second<<endl;
						s.pop();
					}
					if(s.empty())
						break;
					curr_pair = s.top();					
				}
				if (s.empty()){
					cout<<"PUSH : "<<a[i]<<" DAY : "<<0<<endl;
					s.push(make_pair(a[i],0));
				}
				else{
					cout<<"PUSH : "<<a[i]<<" DAY : "<<curr_cnt+1<<endl;
					s.push(make_pair(a[i],curr_cnt+1));
					res=max(res,curr_cnt+1);

				}
			}
			else{
				is_dec = 0;
				curr_cnt = curr_pair.second;
				int next_cnt = curr_cnt;
				cout<<"PUSH : "<<a[i]<<" DAY : "<<1<<endl;
				s.push(make_pair(a[i],1));
				res=max(res,1);

			}
		}
	}
	cout<<res<<endl;
	return 0;
}

