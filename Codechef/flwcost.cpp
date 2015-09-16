#include<iostream>
#include<algorithm>
typedef long int l;
using namespace std;
int main(){
l n,k;
cin>>n;
cin>>k;
l a[n];
for(int i = 1; i <= n; i++){
cin>>a[i];
}
sort(a+1,a+n+1);
l b[n],j=0;
for(int i = n; i >= 1; i--){
j++;
b[j] = a[i];
}

int result = 0,fac = 0;
j = 1;
for(int i = 1; i <= n; i++){

if(j> k) {j=1;fac++;}
result = result+(fac+1)*b[i];
j++;
}
cout<<result<<endl;

}
