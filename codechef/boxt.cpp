#include<iostream>
#include<algorithm>
using namespace std;
typedef long long int ll;
void swap(ll *p1,ll *p2)
{int temp;
 temp = *p1;
 *p1=*p2; 
  *p2 =temp;
  
}

void selectionsort(ll *tr,ll *s,ll start,ll end)
{

ll small,temp,p,check = 0;
 
for (ll i = start; i < end-1 ; i ++){
         check = 0;
         small = s[i];
               for(ll j = i; j < end; j ++){

             if(small > s[j]){// p = j;
                               small = s[j];

                               p = j;
              check = 1; }}
     if(check){ 
       swap(&s[i],&s[p]);
     		swap(&tr[p],&tr[i]);
                     } }

 

}
int main(){
	ll num=1,box = 1,sum,k,n;
	cin>>n;
	cin>>k;
	ll a[n];
		ll boxes[n] ;
		ll trace[n];
	for(ll i = 0; i < n ; i++){
		cin>>a[i];
		boxes[i]=0;
		trace[i] = i;
	}
	if(n < 7000){
	selectionsort(trace,a,0,n);
	sum = 0;

	ll j =0;
	for(ll i = 0 ; i < n; i ++){
		sum =  sum + a[i];
		boxes[j]++;
		if(sum > k){
			sum = 0;
			boxes[j]--;
			box++;
			i--;
			j++;
		}
	}
	cout<<box<<endl;
		sum = 0;
	bool check = true;
	j =0;
	for(ll i = 0 ; i < n; i ++){
		if(check) cout<<boxes[j]<<" ";
		sum = sum + a[i];
		if(sum <= k){
			check = false;
			cout<<trace[i]<<" ";
		}
		if(sum > k){
			check = true;
			num++;
			sum = 0;
			box++;
			i--;
			j++;
			cout<<endl;
		}
	}}
	else{
			sum = 0;

	ll j =0;
	for(int i = 0 ; i < n; i ++){
		sum =  sum + a[i];
		boxes[j]++;
		if(sum > k){
			sum = 0;
			boxes[j]--;
			box++;
			i--;
			j++;
		}
	}
	cout<<box<<endl;
		sum = 0;
	bool check = true;
	j =0;
	for(int i = 0 ; i < n; i ++){
		if(check) cout<<boxes[j]<<" ";
		sum = sum + a[i];
		if(sum <= k){
			check = false;
			cout<<i<<" ";
		}
		if(sum > k){
			check = true;
			num++;
			sum = 0;
			box++;
			i--;
			j++;
			cout<<endl;
		}
	}
	}
	cout<<endl;
	return 0;
	}
