#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int p,arr2[1000000],input[101],n,buff;
cin>>n;

 p = n;
for (int i = 0 ; i < n;i++){
cin>>input[i];
}

 int as2 = 0;
for (int i = 0 ; i < p;i++){if(input[i])
for (int j =0 ; j < p;j++){
for (int k = 0 ; k < p;k++){ arr2[as2] = input[i]*(input[j] + input[k]); as2++ ;}}}
sort(arr2,arr2+as2);

int count = 0;
 int as1 = 0;
for (int i = 0 ; i < p;i++){
for (int j = 0; j < p;j++){
for (int k = 0 ; k < p;k++){ buff = input[i]*input[j] + input[k]; count += upper_bound( arr2, arr2+as2, buff) - lower_bound( arr2, arr2+as2, buff );}}}


cout<<count<<endl;

return 0;}



