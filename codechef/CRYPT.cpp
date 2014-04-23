#include<iostream>
#include<algorithm>
using namespace std;

int printcomb(int a[] , int data[] , int start , int end , int index , int r){
if(index == r){
for(int i = 0;i<r;i++){
cout<<data[i]<<" ";
}
cout<<endl;
return 0;
}

for(int i = start ; i <= end &&  end-i+1 >= r - index;i++){
data[index] = a[i];
printcomb(a,data,i+1,end,index+1,r);
}
}

int main(){
int k;
while(1){
cin>>k;
if(k == 0 ) return 0;
int a[k];
for(int i = 0 ; i < k;i++){
cin>>a[i];
}
sort(a,a+k);
int data[6];
printcomb(a,data,0,k-1,0,6);}
return 0;
}
