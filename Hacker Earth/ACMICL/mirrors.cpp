/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.hackerearth.com/ACMICL/algorithm/6-mirror/
//	Concept : AdHoc
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
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		cin>>n;
		char a[1000][1000];
		for(int i = 0; i<n;i++){
			for(int j = 0; j<n;j++){
				cin>>a[i][j];
			}
		}
		int f = 0;
		for(int col =0; col <n;col++){
			bool res = true;
			int i = n-1;
			int j = col;
			int top=1;
			while ( j < n ){
				if(top){
					if(a[i][j] == '.'){
						i = i-1;
						if(i<0){
							res = false;
							break;
						}
					}
					else if (a[i][j] == '/'){
						j=j+1;
						if(j>n-1){
							break;
						}
						top = 0;
					}
					else if(a[i][j] == '@'){
						res = false;
						break;
					}
				}
				else{
					if(a[i][j] == '.'){
					j=j+1;
						if(j>n-1){
							break;
						}
					}
					else if (a[i][j] == '/'){
							res = false;
							break;
					}
					else if(a[i][j] == '@'){
						res = false;
						break;
					}
				}
			}

			if(res){
				f = 1;
				cout<<"1"<<endl;
				break;	
			}
		}
		if(f == 0){
			cout<<0<<endl;
		}
	}
	return 0;
}
