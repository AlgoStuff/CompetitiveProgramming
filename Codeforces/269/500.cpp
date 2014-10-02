/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://codeforces.com/contest/471/problem/A
//	Concept : Ad Hoc
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




int main(){
	int a[6];
	cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5];
	int legs = 0;
	int cnt[10] = {0};
	memset(cnt,0,10);
	for(int i = 0 ; i < 6 ; i++){
		cnt[a[i]]++;
		if(cnt[a[i]]>=4) legs  = a[i];
	}

	if(legs == 0) cout<<"Alien"<<endl;
	else{
		cnt[legs] -= 4;
		int head,body;
		for(int i = 1; i <= 9;i++){
			if(cnt[i] >= 1){
				cnt[i]--;
				head = i;
			}
		}
		for(int i = 1; i <= 9;i++){
			if(cnt[i] >= 1){
				cnt[i]--;
				body = i;
			}
		}
		if(head == body) cout<<"Elephant"<<endl;
		else cout<<"Bear"<<endl;
	}
	return 0;
}
