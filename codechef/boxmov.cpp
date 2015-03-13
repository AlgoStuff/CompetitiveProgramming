#include<iostream>
#include<string.h>
using namespace std;
int main(){
int t,c=0;
cin>>t;
while(c<t){

unsigned long long int a[3][3],b[6],small;
for(int i = 0 ; i <3 ; i++){for(int j = 0 ; j < 3 ; j++){ cin>>a[i][j];   }}
unsigned long long int BCG,BGC,CBG,CGB,GBC,GCB;
BCG = a[1][0]+a[2][0]+a[0][2]+a[2][2] + a[0][1]+a[1][1];
BGC = a[1][0]+a[2][0]+a[0][1]+a[2][1]+a[0][2]+a[1][2];
CBG = a[1][2]+a[2][2]+a[0][0]+a[2][0]+a[0][1]+a[1][1];
CGB = a[1][2]+a[2][2]+a[0][1]+a[2][1]+a[0][0]+a[1][0];
GBC = a[1][1]+a[2][1]+a[0][0]+a[2][0]+a[0][2]+a[1][2];
GCB = a[1][1]+a[2][1]+a[0][2]+a[2][2] +a[0][0]+a[1][0];
b[0]=BCG;
b[1]=BGC;
b[2]=CBG;
b[3]=CGB;
b[4]=GBC;
b[5]=GCB;
small = b[0];
for(int i = 0 ; i < 6; i++){
if(small > b[i]){small = b[i];}}

if(small == BCG){ cout<<"BCG "<<small<<endl;}
else if (small == BGC){ cout<<"BGC "<<small<<endl;}
else if (small == CBG){ cout<<"CBG "<<small<<endl;}
else if (small == CGB){ cout<<"CGB "<<small<<endl;}
else if (small == GBC){ cout<<"GBC "<<small<<endl;}
else if (small == GCB){ cout<<"GCB "<<small<<endl;}
c++;}

return 0;}
