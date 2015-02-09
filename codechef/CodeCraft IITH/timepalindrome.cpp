/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : 
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
	int t;
	scanf("%d",&t);
	while(t--){
		string t1;string t2;
		cin>>t1>>t2;
		int h1,h2,m1,m2,s1,s2;


		h1 = ((t1[0]-'0')*10)+(t1[1]-'0');
		m1 = ((t1[3]-'0')*10)+(t1[4]-'0');
		s1 = ((t1[6]-'0')*10)+(t1[7]-'0');

		h2 = ((t2[0]-'0')*10)+(t2[1]-'0');
		m2 = ((t2[3]-'0')*10)+(t2[4]-'0');
		s2 = ((t2[6]-'0')*10)+(t2[7]-'0');
		int cnt=0;
		for(int i = h1; i <= h2;i++){
			int temp = i%10;
			temp = temp*10 + i/10;
			if(m1 == m2){
				if(temp >=s1 && temp <= s2){cout<<temp<<endl;cnt++;}
			}
			else{
				if((temp>=s1&&temp<=59 )|| (temp>=0&&temp<=s2)){
					cout<<temp<<endl;cnt++;
				}
			}
		}
		int mins[] = {0,11,22,33,44,55};
		int cnt2=0;
		for(int i = 0; i <6;i++){
			if(h1==h2){
						if(mins[i]>=m1 && mins[i]<=m2){
							cnt2++;
							cout<<mins[i]<<endl;
						}}
			else{
				if((mins[i]>=m1 && mins[i]<=59) || (mins[i]>=0 && mins[i]<=m2)){
							cnt2++;
							cout<<mins[i]<<endl;
						}
			}			
		}
		cout<<cnt*cnt2<<endl;

	}
	return 0;
}
