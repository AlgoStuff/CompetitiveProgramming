#include<iostream>
using namespace std;
typedef long long int l;
int main(){
l t;
cin>>t;
while(t--){
l size;
cin>>size;

char color[size];

for(int i= 1; i <= size  ; i++){
cin>>color[i];
}
bool check= true;
while(check){
check = false;
for(int i = 1 ; i <size;i++){

if(color[i] != color[i+1]){
check = true;
if(color[i] == 'R'){
if(color[i+1] == 'G') {color[i+1] = 'B';}

else if (color[i+1] == 'B') {color[i+1] = 'G';}

}

else if(color[i] == 'B'){
if(color[i+1] == 'G') {color[i+1] = 'R';}

else if (color[i+1] == 'R') {color[i+1] = 'G';}

}

else if(color[i] == 'G'){
if(color[i+1] == 'R') {color[i+1] = 'B';}

else if (color[i+1] == 'B') {color[i+1] = 'R';}


}


for(int j = i ; j<size;j++){
color[j] = color[j+1];
}
size--;}





}}
cout<<size<<endl;}


}
