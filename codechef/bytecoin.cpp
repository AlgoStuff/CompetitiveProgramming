#include<iostream>
#include<cstdio>

using namespace std;
typedef unsigned long long int ul;
ul a[1000000];
ul coins(ul num){
if(num <= 1000000) return a[num];
if(num > coins(num/2) + coins(num/3) + coins(num/4)) return num;
else return (coins(num/2) + coins(num/3) + coins(num/4));
}
int main(){
ul t,n;


for(ul i = 0;i<= 1000000;i++){
if( i <= 11) a[i] = i;
else {
if(i > a[i/2]+a[i/3]+a[i/4]) a[i] = i;
else a[i] = (a[i/2]+a[i/3]+a[i/4]);
}

}


while(cin>>n;){

cout<<coins(n)<<endl;
}






}
