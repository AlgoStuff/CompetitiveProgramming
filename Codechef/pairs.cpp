#include<algorithm>
#include<iostream>
#include<cstdlib>
using namespace std;
typedef unsigned long int l;
int main(){
l n,k;
cin>>n;
cin>>k;
l a[n];
for(int i = 1; i <=n; i++){
cin>>a[i];

}

sort(a+1,a+n+1);
l count = 0;
for(int i = n; i >1; i--){
for(int j = i-1; j >= 1; j--){
if(a[i] -a[j] == k )count++;

}}

cout<<count<<endl;





return 0;
}

