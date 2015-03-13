#include<iostream>
#include<algorithm>
#include<cstdio>
#include<fstream>
using namespace std;
int main(){
int n,neg,pos=0,zero=0;
ifstream cin;
ofstream fout;

cin>>n;
bool check = false;
int a[n];
for(int i = 0 ; i < n; i ++){
cin>>a[i];
if(a[i]>0) check = true;
if(a[i] != 0) pos++;
else zero++;
}
sort(a,a+n);
if(check){
cout<<1<<" "<<a[0]<<endl;
cout<<1<<" "<<a[n-1]<<endl;
cout<<n-2<<" ";
for(int i = 1 ; i < n-1; i ++){
 cout<<a[i]<<" ";
}
cout<<endl;
cout.flush();
}
else{
cout<<1<<" "<<a[0]<<endl;
cout<<2<<" "<<a[1]<<" "<<a[2]<<endl;
cout<<n-3<<" ";
for(int i = 3;i<n;i++){ cout<<a[i]<<" "; }
cout<<endl;
}

}
