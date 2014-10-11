/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/OCT14/problems/CHEFSQUA
//	Concept : Binary Search
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

int n;
std::vector< pair< int , int > > v(2001);

bool compare(pair <int , int> a, pair <int , int> b){
	if(a.first < b.first) return true;
	if(a.first > b.first) return false;
	else return a.second < b.second;
}

int find_high_bound(int key,int low, int high){
	if(low <= high){
		int mid = (high + low)/2;
		if((mid == high && v[mid].first == key) || (v[mid].first == key&& v[mid+1].first > key)){
			return mid;
		}
		else if(v[mid].first <= key){
			return find_high_bound(key,mid+1,high);
		}
		else{
			return find_high_bound(key,low,mid-1);
		}	
	}
return -1;
}

int find_low_bound(int key,int low, int high){
	if(low <= high){
		int mid = (high + low)/2;
		if((mid == low && v[mid].first == key) || (v[mid].first == key&& v[mid-1].first < key)){
			return mid;
		}
		else if(v[mid].first >= key){
			return find_low_bound(key,low,mid-1);
		}
		else{
			return find_low_bound(key,mid+1,high);
		}	
	}
return -1;
}

int b_s(pair <int , int> a){
	int low = find_low_bound(a.first,0,n-1);
	if(low == -1) return 0;
	int high = find_high_bound(a.first,0,n-1);

	//cout<<low<<" "<<high<<endl;

	int key = a.second;
	int mid = (high + low)/2;
	while(low <= high){
		mid = (high + low)/2;
		if(key == v[mid].second) return 1;
		else if (key > v[mid].second) low = mid + 1;
		else high = mid - 1;
	}
	return 0;
}


int find(pair <int , int> a, pair <int , int> b){
	pair <int , int> a1;
	pair <int , int> a2;
	pair <int , int> temp;
	int res = 2;
	if(a.first > b.first){
		temp = a;
		a = b;
		b = temp;
	}
	
	else if(a.first == b.first) return 3;
	a1.first = a.first + a.second - b.second;
	a1.second = a.second + b.first - a.first;
	a2.first = b.first + a.second - b.second;
	a2.second = b.second + b.first - a.first;

	//cout<<a1.first<<" "<<a1.second<<" "<<a2.first<<" "<<a2.second<<endl;
	if(b_s(a1)) res--;
	if(b_s(a2)) res--;
	return res;
}
int main(){
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d %d",&v[i].first,&v[i].second);
	}
	if(n == 0){
		printf("%d\n", 4);
		return 0;
	}
	if(n == 1){
		printf("%d\n", 3);
		return 0;
	}
	if(n == 2){
		printf("%d\n", 2);
		return 0;
	}
	int res = 3;
	sort(v.begin(),v.begin()+n,compare);
	for(int i = 0; i < n;i++){
		for(int j = i+1; j < n;j++){
			int curr_res = find(v[i],v[j]);
			if(res>curr_res) res = curr_res;
			if(res == 0) break;
		}
	}
	printf("%d\n", res);
	return 0;
}
