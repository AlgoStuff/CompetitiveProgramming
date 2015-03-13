#include<iostream>
#include<algorithm>
using namespace std;
typedef int ll;
int moves =0;
	ll n,sum=0,k;

void bring(ll *a,ll pos){
	ll front = pos+1;
	ll back = pos-1;
	ll bc = 1;
	ll fc = 1;
	while(a[pos] < k){
		if(back < 1){ back = n;}
		if(front > n){front = 1;}
		if(a[back] > k  && a[pos] < k ){
			
			if((a[back] - k )>(k - a[pos])){
				moves = moves+(bc * (k-a[pos]));
				a[back] = a[back] - k + a[pos];
				a[pos] = k;				
			}
			else if ((a[back] - k )<(k - a[pos])){
				moves = moves+(bc*(a[back] - k));
				a[pos] = a[pos] + a[back] - k;
				a[back] = k;
			}
			else if ((a[back] - k )==(k - a[pos])){
				moves = moves + (bc*(a[back] - k));
				a[back] = k;
				a[pos] = k;
			}


		}
					bc++;
					back--;
		if(a[front] > k  && a[pos] < k){
			if((a[front] - k )> (k - a[pos])){
			        moves = moves+(fc * (k-a[pos]));
				a[front] = a[front] - k + a[pos];
				a[pos] = k;				
			}
			else if ((a[front] - k )<(k - a[pos])){
				moves = moves+(fc*(a[front] - k));				
				a[pos] = a[pos] + a[front] - k;
				a[front] = k;
			}
			else if ((a[front] - k)==(k - a[pos])){
				moves = moves + (fc*(a[front] - k));				
				a[front] = k;
				a[pos] = k;
			}

		}
					fc++;
					front++;
	}
}	
int main(){

	cin>>n;
	ll a[n];

	for(ll i = 1  ; i <= n; i++){
		cin>>a[i];
		
		//a[i] = 100000001+i;
		sum = sum+a[i];
		
	}
	k = sum/n;
	for(ll i = 1; i <= n; i++){
		if(a[i]<k){
			bring(a,i);
		}
	}
	
	cout<<moves<<endl;
	for(ll i = 1  ; i <= n; i++){
		cout<<a[i]<<" ";}
}
