#include<iostream>

using namespace std;
int a[51];

int submin(int start,int end){
int min = 1000001;
for(int i = start; i <= end;i++) if(min > a[i]) min = a[i];
return min;
}

int main(){
int q,n,buff;
cin>>n;

for(int i = 0 ; i < n ; i++) cin>>a[i];
cin>>q;
int sub[1000001] = {0};
for(int i = 0 ; i < n ; i++){
for(int j = i; j < n;j++){
sub[submin(i,j)]++;
}
}
while(q--){
cin>>buff;
cout<<sub[buff]<<endl;
}
return 0;
}
