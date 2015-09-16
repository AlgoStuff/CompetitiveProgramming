#include<vector>
#include<iostream>
#include<stack>
#include<queue>
#include<string.h>
#include<cstdio>
#include<iomanip>
#include<map>
#include<algorithm>
#include<list>
using namespace std;

int main(){
long int res = 0,size,cost,neg;
cin>>size;
long int a[size+1];
for(long int i = 0; i < size; i++){
cin>>a[i];
}
cin>>cost;
for(long int i = 0; i < size; i++){
neg = 0;
long int sum = 0;
for(long int j = 0; j < size; j++){
if(a[j] < 0){
neg++;
sum = sum + -1*a[j];

}}
if(sum > neg*cost) {
for(long int k = 0; k < size; k++){
a[k]++;}
res += cost;}
else {res += sum; cout<<res<<endl; return 0;}
}
cout<<res<<endl;
return 0;
}
