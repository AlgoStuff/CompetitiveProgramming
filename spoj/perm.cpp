#include<iostream>
using namespace std;
int a[1000000];

int main(){
int n = 100000;


for(int i = 0; i < n ;i++) a[i]=1;
for(int i = 0; i < n ;i++) 
for(int j = i+1; j < n ;j++)if(a[i]>= a[j]) a[i]++;

for(int i = 0; i < n ;i++) cout<<a[i]<<" ";
cout<<endl;


}



