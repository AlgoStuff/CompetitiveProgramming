#include<iostream>
#include<ctime>
#include<algorithm>
#include<vector>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
int n,buff,buff2;
cin>>n;
int a[1001] = {0};
for(int i = 1; i <=n ;i++){
 cin>>buff;
 
 cin>>buff2;
 a[buff] = buff2; 
}
int sum = 0;
for(int i = 1; i <=1001 ;i++){
if(a[i] != 0 && a[a[i]] != 0 && a[i] != i) sum++;
}
cout<<n - sum<<endl;
}
