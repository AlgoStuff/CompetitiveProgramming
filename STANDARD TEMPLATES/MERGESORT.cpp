#include<iostream>

using namespace std;


void merge(int a[],int start,int mid,int end){
	int left = mid-start+1;
	int right = end-mid;
	int la[left],ra[right];
	for(int i = start; i <=mid;i++){
		la[i-start] = a[i];
	}
	for(int i = mid+1;i <=end;i++){
		ra[i-mid-1] = a[i];
	}
	int lc = 0,rc = 0,mc=start;
	while(lc < left && rc < right){
		if(la[lc]<ra[rc]){
			a[mc]=la[lc];
			lc++;
		}
		else{
			a[mc]=ra[rc];
			rc++;
		}
		mc++;
	}

	while(lc<left){
		a[mc]=la[lc];
		lc++;
		mc++;
	}
	while(rc<right){
		a[mc]=ra[rc];
		rc++;
		mc++;
	}
}

void mergesort(int a[],int start,int end){
	if(start<end){
		int mid = (start+end)/2;
		mergesort(a,start,mid);
		mergesort(a,mid+1,end);
		merge(a,start,mid,end);
	}
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n;i++){
			cin>>a[i];
		}
		mergesort(a,0,n-1);
		for(int i = 0; i < n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}