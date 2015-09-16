#include<iostream>

using namespace std;

int main(){
int n;
cin>>n;
int c = 0;
int x,y;
while(c<n){
cin>>x>>y;
c++;
}
char a[55][55],aa[55][55];
int cn = 0;
for(int i = 0 ; i < n;i++){
for(int j = 0 ; j < n ; j++){
cin>>a[i][j];
aa[i][j] = a[i][j];
}
}
for(int i = 0 ; i < n;i++){
for(int j = 0 ; j < n ; j++){
if(aa[i][j] == 'Y'){

int cnt = 1;
int k;
for( k = 0;k < n;k++){
if(aa[j][k] == 'Y' && k != i){
cnt++;
aa[k][j] = 'N';
break;
}
}
aa[j][i] = 'N';
aa[i][j] = 'N';
aa[j][k] = 'N';
cn++;
}
}
}
cout<<cn<<endl;
for(int i = 0 ; i < n;i++){
for(int j = 0 ; j < n ; j++){
if(a[i][j] == 'Y'){

int cnt = 1;
int k;
for( k = 0;k < n;k++){
if(a[j][k] == 'Y' && k != i){
cnt++;
a[k][j] = 'N';
break;
}
}
a[j][i] = 'N';
a[i][j] = 'N';
a[j][k] = 'N';
if(cnt == 1) cout<<1<<" "<<i+1<<" "<<j+1<<endl;
else cout<<2<<" "<<i+1<<" "<<j+1<<" "<<k+1<<endl;
}
}
}
return 0;
}
