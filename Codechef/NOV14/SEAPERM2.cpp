/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/NOV14/problems/SEAPERM2 
//	Concept : Logic
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
typedef long long int lli;
typedef long int li;

#define MOD7 1000000007
#define MOD9 1000000009

using namespace std;




int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int hash[1000001]={0};
		int n;
		cin>>n;
		int a[n][n];
		int pivot=-1;
		int max_res = -1;
		for(int i = 0; i < n;i++){
			for(int j = 0; j < n-1;j++){
				cin>>a[i][j];
				max_res = max(max_res,a[i][j]);
				if(i>0 && hash[a[i][j]] == 0){
					pivot = i;
				}
				hash[a[i][j]] = 1;
			}
			sort(a[i],a[i]+(n-1));
		}
		if(pivot == -1){
			for( int i = 0; i < n-1;i++ ){
				cout<< a[0][i] << " ";
			}
			cout<<max_res<<endl;
		}
		else{
			//cout<<pivot<<endl;
			bool found1 = false,found2 = false;
			int i,j;
			for(i = 0,j=0;;){
				//cout<<i<<" "<<j<<endl;
				if(i == n-1){
					for(int k = j;k<n-1;k++){
						cout<<a[pivot][k]+1<<" ";
					}
					break;
				}
				else if(j == n-1){
					for(int k = i;k<n-1;k++){
						cout<<a[0][k]+1<<" ";
					}
					break;
				}	
				if(a[pivot][j] == a[0][i]){
					if(found1 and found2)
						cout<<a[0][j]+1<<" ";
					else
						cout<<a[0][i]<<" ";
					i++;
					j++;
				}
				else if(a[pivot][j]<a[0][i]){
					found1 = true;
					if(i == j){
						cout<<a[pivot][j]<<" ";
						j++;

					}
					else if (a[pivot][j]+1==a[0][i]){
						cout<<a[0][j]<<" ";
						i++;
						j++;
					}
					else{
						cout<<a[pivot][j]+1<<" ";
						j++;
					}
				}
				else{
					found2 = true;
					if(i==j){
						cout<<a[0][i]<<" ";
						i++;
					}
					else if (a[pivot][j]==a[0][i]+1){
						cout<<a[pivot][j]<<" ";
						i++;
						j++;
					}
					else{
						cout<<a[0][i]+1<<" ";
						i++;
					}	
				}
			}
			cout<<endl;
		}

	}
	return 0;
}
