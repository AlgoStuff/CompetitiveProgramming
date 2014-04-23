#include<iostream>
using namespace std;
int main(){
static int a[1000001];
long int diffnum[1000000];
diffnum[0]  = 0;
long int size,i = 0;
cin>>size;
long int buff;
while(size--){
cin>>buff;
i++;
if(a[buff] == 1) {diffnum[i] = diffnum[i-1];}
else{a[buff] = 1; diffnum[i] = diffnum[i-1]+1;}
}

long int q,m,n;
cin>>q;
while(q--){
cin>>m;
cin>>n;
cout<<diffnum[n] - diffnum[m-1]<<endl;
}








return 0;
}
