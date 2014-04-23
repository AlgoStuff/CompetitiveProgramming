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
void shift(int a, int b , int *c){
for(int i = 0; i < (b-a)/2; i++){
int temp = c[a+i];
c[a+i] = c[b-i];
c[b-i] = temp;
}
}
int main(){
int n,a,b,c,d,e,f,bl;
cin>>n;
int res = 0;
int arr[n];
for(int i = 1; i <=n;i++){
cin>>arr[i];
}
bl = 0;
for(int i = 1; i <= n ; i++){
if(arr[i] != i){
res++;
bl = 1;
a = i;
b = arr[i];
shift(a,b,arr);
break;
}
} 
for(int i = 1; i <=n;i++){
cout<<arr[i]<<" ";
}
cout<<endl;
if(!bl) {
if(res == 0) {cout<<0<<endl; return 0;}
else{
cout<<res<<endl;
cout<<a<<" "<<b<<endl;
return 0;
}}

bl = 0;
for(int i = 1; i <= n ; i++){
if(arr[i] != i){
res++;
bl = 1;
c = i;
d = arr[i];
shift(c,d,arr);
break;
}
} 
if(bl) {
for(int i = 1; i <=n;i++){
cout<<arr[i]<<" ";
}
cout<<endl;
bl = 0;
for(int i = 1; i <= n ; i++){
if(arr[i] != i){
res++;
bl = 1;
e = i;
f = arr[i];
shift(e,f,arr);
break;
}
} 
for(int i = 1; i <=n;i++){
cout<<arr[i]<<" ";
}
cout<<endl;
if(bl) {
cout<<res<<endl;
cout<<a<<" "<<b<<endl;
cout<<c<<" "<<d<<endl;
cout<<e<<" "<<f<<endl;
return 0;
}
else{
cout<<res<<endl;
cout<<a<<" "<<b<<endl;
cout<<c<<" "<<d<<endl;
return 0;

}
}
else{
cout<<res<<endl;
cout<<a<<" "<<b<<endl;
return 0;
}


}
