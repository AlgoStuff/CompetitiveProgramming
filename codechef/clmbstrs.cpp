#include<iostream>
#include<stdio.h>
using namespace std;
typedef unsigned long long ull;
 

int main(){ 
ull b[1000001];
b[1] = 1;
b[2] = 1;
for(int i = 3; i <=1000001 ; i++){
b[i] = (b[i-1]+b[i-2])%1000000007;
}


for(int i = 1; i <=1000001;i++){
int count = 0;
while(b[i] != 0){
if(b[i]%2 == 1){count++;}
b[i] = b[i]/2;
}
b[i] = count;
}

long long int t;
//cout<<b[1000000]<<endl;
cin>>t;
while(t--)
{int g;
ull n;
cin>>n;
cin>>g;
//cout<<b[n+1]<<endl;
if(g > 32) {cout<<"INCORRECT\n";}
else{if(b[n+1] == g) {cout<<"CORRECT\n";}
else {cout<<"INCORRECT\n";}}
}
return 0;} 
