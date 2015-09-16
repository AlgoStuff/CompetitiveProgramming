#include<iostream>
using namespace std;

int main(){
int n,t;
cin>>t;
while(t--){
cin>>n;
long long int a[n];
long long int small = 1000000001;
for(int i = 0; i <n;i++){cin>>a[i];
if (small > a[i]) small = a[i];  }

long long int prev = small,next;
while(1){
prev = small;
if(small == 1){ cout<<1<<endl; break;}
for(int i = 0; i <n;i++){ if(a[i]%small == 0) a[i] = small;
else {a[i] = a[i]%small;  
if(a[i]<small) next = a[i];}  }
if(next == small){cout<<small<<endl; break;}
small = next;
}



}






}
