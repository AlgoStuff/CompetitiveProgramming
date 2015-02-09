/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/DCOD2015/problems/CD1IT3
//	Concept : Binary Search
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


int bsearch(ull a[],int start , int end,ull key){
	int low = start;
	int high = end;
	int mid = (low+high)/2;
	while(low<=high){
		mid = (low+high)/2;
		if(a[mid]>key) high = mid-1;
		else if(a[mid]<key) low = mid+1;
		else return mid;
	}
	return -1;
}

int main(){
	ull n,k;
	cin>>n>>k;
	ull a[n];
	for(int i =0; i < n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int found = false;
	for(int i = 0; i < n;i++){
		if(k-a[i]>=0){
			int pos1 = bsearch(a,0,i-1,k-a[i]);
			int pos2 = bsearch(a,i+1,n-1,k-a[i]);
			if(pos1 != -1 || pos2 != -1){
				found = true;			
				cout<<"Yes"<<endl;
				break;
			}
		}
	}
	if(!found){
		cout<<"No"<<endl;
	}
	return 0;
}
