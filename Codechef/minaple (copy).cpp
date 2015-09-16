#include<iostream>
#include<algorithm>
using namespace std;
typedef long long int ll;
ll moves = 0;

int main(){
	ll n,sum=0;
	cin>>n;
	ll a[n];
	for(int i = 1 ; i <= n ; i++){
		cin>>a[i];
		sum = sum+a[i];
	}
	ll less=0,more=0;
	ll ave = sum/n;
	 for(int i = 1 ; i <=n ; i++){
		a[i] = a[i] - ave;
	}
	ll med, b[n];
	b[0] = 0;
	for(int i = 1; i <= n ; i++){
		b[i] = b[i-1] + a[i];
		if(b[i] <= 0){less++;}
		else more++;
	}

	sort(b+1,b+n+2);


	
	if(n%2 == 0){
		med = (b[n/2] + b[(n/2) + 1])/2;
	}
	else med = b[(n/2) + 1];
	if(med < 0){med = med * -1;}
	if(less < more) med = med*-1;
	
	for(int i = 1; i <= n; i++){
		b[i] = b[i]+med;
		if(b[i] < 0) b[i] = b[i]*-1;
		moves = moves+b[i];
	}
	cout<<moves<<endl;
}
