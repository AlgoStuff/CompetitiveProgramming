/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.hackerearth.com/code-monk-sorting/algorithm/chandu-and-his-girlfriend/
//	Concept : Sorting
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



//QUICKSORT

int partition(int arr[],int start , int end){
	int pivot = arr[end];
	int mp = start;
	int temp;
	for(int i = start;i<end;i++){
		if(arr[i]>pivot){
			temp = arr[i];
			arr[i] = arr[mp];
			arr[mp] = temp;
			mp++;
		}
	}
	temp = arr[mp];
	arr[mp] = pivot;
	arr[end] = temp;
	return mp;
}

void quicksort(int arr[],int start,int end){
	if(start<end){
		int pivot = partition(arr,start,end);
		quicksort(arr,start,pivot-1);
		quicksort(arr,pivot+1,end);
	}
}

//MERGESORT

void merge(int arr[],int start,int middle,int end){
	int left = middle - start + 1;
	int right = end - middle;
	int larr[left],rarr[right];
	for(int i = start; i <=middle;i++){
		larr[i-start] = arr[i];
	}
	for(int i = middle+1;i<=end;i++){
		rarr[i-middle-1]=arr[i];
	}
	int lp=0,rp=0,mp=start;
	while(lp<left && rp<right){
		if(larr[lp] >= rarr[rp]){
			arr[mp] = larr[lp];
			lp++;
		}
		else{
			arr[mp]=rarr[rp];
			rp++;
		}
		mp++;
	}
	while(lp<left){
		arr[mp]=larr[lp];
		lp++;
		mp++;
	}
	while(rp<right){
		arr[mp]=rarr[rp];
		rp++;
		mp++;
	}
}

void mergesort(int arr[],int start , int end){
	if(start<end){
		int middle = (start+end)/2;
		mergesort(arr,start,middle);
		mergesort(arr,middle+1,end);
		merge(arr,start,middle,end);
	}
}

//HEAPSORT

int parent(int n){
	return n/2;
}

int left(int n){
	return 2*n;
}

int right(int n){
	return 2*n+1;
}

void maxheapify(int arr[],int heapsize,int curr){
	int l = left(curr);
	int r = right(curr);
	int large = curr;
	int swap;
	if (l<heapsize && arr[l]>arr[curr]){
		large = l;
	}
	if(r<heapsize && arr[r]>arr[large]){
		large = r;
	}
	if(curr != large){
		swap = arr[large];
		arr[large] = arr[curr];
		arr[curr] = swap;

		maxheapify(arr,heapsize,large);
	}
}


void minheapify(int arr[],int heapsize,int curr){
	int l = left(curr);
	int r = right(curr);
	int large = curr;
	int swap;
	if (l<heapsize && arr[l]<arr[curr]){
		large = l;
	}
	if(r<heapsize && arr[r]<arr[large]){
		large = r;
	}
	if(curr != large){
		swap = arr[large];
		arr[large] = arr[curr];
		arr[curr] = swap;

		minheapify(arr,heapsize,large);
	}
}

void heapsort(int arr[],int heapsize){

	for(int i = heapsize/2; i>= 0; i--){
		minheapify(arr,heapsize,i);
	}
	int temp_size = heapsize;
	for(int i = 0; i < temp_size;i++){
		int swap = arr[0];
		arr[0] =  arr[heapsize-1];
		arr[heapsize-1]=swap;
		heapsize--;
		minheapify(arr,heapsize,0);
	}

}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i = 0; i < n;i++){
			scanf("%d",&arr[i]);

		}
		heapsort(arr,n);
		for(int i = 0; i < n; i++){
			printf("%d ",arr[i]);
		}
		cout<<endl;
	}
	return 0;
}
