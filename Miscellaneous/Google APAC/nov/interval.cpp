/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://code.google.com/codejam/contest/6214486/dashboard#s=p1
//	Concept : 
//	Reference :	
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
typedef long long int lli;
typedef long int li;

#define MOD7 1000000007
#define MOD9 1000000009

using namespace std;




int main(){
	int t;
	scanf("%d",&t);
	int c =1;
	while(c<=t){
		int n;
		cin>>n;
		int a[5001]={0};
		for(int i = 0;i<n;i++){
			int l,h;
			cin>>l>>h;
			for(int i = l ; i <= h;i++){
				a[i]+=1;
			}
		}
		int q;
		cin>>q;
		cout<<"Case #"<<c<<": ";
		while(q--){
			int city;
			cin>>city;
			cout<<a[city]<<" ";
		}
		cout<<endl;
		c+=1;
	}
	return 0;
}
