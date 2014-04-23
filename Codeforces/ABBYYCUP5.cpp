#include<iostream>
#include<ctime>
#include<algorithm>
#include<vector>
#include<fstream>
#include<string.h>
using namespace std;
typedef unsigned long long  ull;
int main(){
ull n , m;
ull fib[200001];
fib[0] = 1;
fib[1] = 1;
for(ull i = 2; i <= 200001;i++){
fib[i] = (fib[i-1]%1000000000+fib[i-2]%1000000000)%1000000000;
}
cin>>n;
ull a[n];
cin>>m;
for (ull i = 1;i<=n;i++) cin>>a[i];

while(m--){
ull q;
cin>>q;
if(q == 1){
ull pos,ex;
cin>>pos;
cin>>ex;
a[pos]=ex;
}
if(q==2){
ull l,r;
ull sum = 0;
cin>>l;
cin>>r;
for(ull x = 0 ; x<= r-l;x++) sum = (sum + fib[x]*a[l+x])%1000000000;
cout<<sum%1000000000<<endl;
}

}




}
