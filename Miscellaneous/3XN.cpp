#include<iostream>
using namespace std;
long int f(long int );
long int g(long int n){
if(n == 0) return 0;
if(n == 1) return 1;
else return f(n-1) + g(n-2);
}
long int f(long int n){
if(n == 0) return 1;
if(n == 1) return 0;
else return f(n-2) + 2*g(n-1);
}

int main(){
int n;
while(true){
cin>>n;
if(n == -1) return 0;
cout<<f(n)<<endl;}



}
