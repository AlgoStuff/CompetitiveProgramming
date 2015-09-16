#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
long long int high = 1000000000,start = 1;
long long int a[30];

int count = 0;
while(start <high){
a[count] = start;
start = start *2;
count++;
}

int t;
cin>>t;
while(t--){
long long int p,q;
cin>>p>>q;
if(p/q > 2) cout<<"NO"<<endl;
else{
if(binary_search(a,a+count,p) && binary_search(a,a+count,q+1)) cout<<"YES"<<endl;
else cout<<"NO"<<endl; 
}
} 
return 0;
}
