#include<iostream>
#include<vector>

using namespace std;

int main(){
int n,m;
cin>>n>>m;
int p[100][100];
int a[100][100];
int hash[100][100][10];
for(int i = 1 ; i <= n;i++){
for(int j = 1 ; j <= m;j++){
cin>>p[i][j];
}
}


for(int i = 1 ; i <= n;i++){
for(int j = 1 ; j <= m;j++){
cin>>a[i][j];
}
}

int res = 1;
int resp[10001][5];
resp[2][1] = 1;
resp[2][2] = 1;
resp[2][3] = n;
resp[2][4] = m;
resp[2][5] = 0;


 res = 2;
int mod[10] = {0};
int rem = 0;
for(int i = 1 ; i <= n;i++){
for(int j = 1 ; j <= m;j++){
if(a[i][j]%p[i][j])
mod[a[i][j]%p[i][j]]++;
}}
int maxi = 0;
for(int i = 1; i < 10;i++){
if(maxi < mod[i]){
maxi = mod[i];
rem = i;
}
}

resp[1][1] = 1;
resp[1][2] = 1;
resp[1][3] = n;
resp[1][4] = m;
resp[1][5] = rem;

for(int i = 1 ; i <= n;i++){
for(int j = 1 ; j <= m;j++){
a[i][j] = (rem + a[i][j])%p[i][j];
}
}
int clr[m][n];
int zeros = 0;
int noze = 0;
for(int i = 1 ; i <= n;i++){
for(int j = 1 ; j <= m;j++){
clr[m][n] = 0;
if(a[i][j]%p[i][j] == 0){ a[i][j] = 0; zeros++;}
else noze++;
}
}




for(int i = 1 ; i <= n;i++){
for(int j = 1 ; j <= m;j++){
for(int k = 0 ; k < 10;k++){
if((k+a[i][j])%p[i][j] == 0) hash[i][j][k] = 1;
else hash[i][j][k] = 0;
}
}
}

int temp[10];

for(int i = 1 ; i <= n-2;i++){
for(int j = 1 ; j <= m-2;){
if(clr[i][j]) {j++; continue;}

for(int l = 0 ; l < 10; l++) temp[l] = 1;
for(int k = 0; k < 10 ; k++) if(temp[k] != hash[i][j][k] && temp[k]) temp[k] = 0;
for(int k = 0; k < 10 ; k++) if(temp[k] != hash[i][j+1][k] && temp[k]) temp[k] = 0;
for(int k = 0; k < 10 ; k++) if(temp[k] != hash[i+1][j][k] && temp[k]) temp[k] = 0;
for(int k = 0; k < 10 ; k++) if(temp[k] != hash[i+1][j+1][k] && temp[k]) temp[k] = 0;
for(int k = 0; k < 10 ; k++) if(temp[k] != hash[i][j+2][k] && temp[k]) temp[k] = 0;
for(int k = 0; k < 10 ; k++) if(temp[k] != hash[i+1][j+2][k] && temp[k]) temp[k] = 0;
for(int k = 0; k < 10 ; k++) if(temp[k] != hash[i+2][j+2][k] && temp[k]) temp[k] = 0;
for(int k = 0; k < 10 ; k++) if(temp[k] != hash[i+2][j][k] && temp[k]) temp[k] = 0;
for(int k = 0; k < 10 ; k++) if(temp[k] != hash[i+2][j+1][k] && temp[k]) temp[k] = 0;
for(int k = 0; k < 10 ; k++) if(temp[k]){
res++;
resp[res][1] = i;
resp[res][2] = j;
resp[res][3] = i+2;
resp[res][4] = j+2;
resp[res][5] = k;
a[i][j] = 0;
a[i+1][j] = 0;
a[i][j+1] = 0;
a[i+1][j+1] = 0;
a[i][j+2] = 0;
a[i+1][j+2] = 0;
a[i+2][j+2] = 0;
a[i+2][j+1] = 0;
a[i+2][j] = 0;

clr[i][j] = 1;
clr[i+1][j] = 1;
clr[i][j+1] = 1;
clr[i+1][j+1] = 1;
clr[i][j+2] = 1;
clr[i+1][j+2] = 1;
clr[i+2][j+2] = 1;
clr[i+2][j+1] = 1;
clr[i+2][j] = 1;

for(int ii = i ; ii <= i+2;ii++){
for(int jj = j ; jj <= j+2 ;jj++){
for(int k = 0 ; k < 10;k++){
hash[ii][jj][k] = 1;
}
}
}
break;
}
}
}
int is_zero[100] = {0};
for(int i = 1 ; i <= n;i++){
for(int j = 1 ; j <= m;j++){
if(a[i][j]) is_zero[i] = 1;
}}

for(int i = 1 ; i <= n;i++){
for(int j = 1 ; j <= m ;j++){
for(int k = 0 ; k < 10;k++){
if((k+a[i][j])%p[i][j] == 0) hash[i][j][k] = 1;
else hash[i][j][k] = 0;
}
}
}


for(int i = 1 ; i <= n;i++){
int prev = 1;
for(int l = 0 ; l < 10; l++) temp[l] = 1;
int key = 0;
for(int j = 1 ; j <= m && is_zero[i];j++){
int counted = 0;
for(int k = 0 ; k < 10;k++){
if(hash[i][j][k] == 1 && temp[k] == 1){
counted = 1;
key = k;
//cout<<"counted"<<endl;
}
else if(hash[i][j][k] == 0 && temp[k] == 1) temp[k] = 0;
}
if(!counted){
res++;
resp[res][1] = i;
resp[res][2] = prev;
resp[res][3] = i;
resp[res][4] = j-1;
resp[res][5] = key;
prev = j;
key = 0;
j--;
for(int l = 0 ; l < 10; l++) temp[l] = 1;
}
if(j == m){

res++;
resp[res][1] = i;
resp[res][2] = prev;
resp[res][3] = i;
resp[res][4] = j;
resp[res][5] = key;

}
}
}

cout<<res<<endl;
for(int i = 1 ; i <= res ; i++){
cout<<resp[i][1]<<" "<<resp[i][2]<<" "<<resp[i][3]<<" "<<resp[i][4]<<" "<<resp[i][5]<<endl;
}
return 0;
}
