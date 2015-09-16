#include<iostream>
#include<cmath>
using namespace std;
typedef long long int l;
int main(){
l t,n;
cin>>t;
while(t--){
cin>>n;
if(n==1){cout<<1<<endl;}
else if(n==2){cout<<1<<endl;}
else if(n==3){cout<<2<<endl;}
else {
if(n%3 == 0){ cout<<pow(3,n/3)<<endl;  }
if(n%3 == 1){ cout<<4*pow(3,n/3-1)<<endl;  }
if(n%3 == 2){ cout<<2*pow(3,n/3)<<endl;}
}

}



}
