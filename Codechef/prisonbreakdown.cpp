#include<iostream>
#include<string.h>
#include<stdio.h>
#include<cstdlib>
using namespace std;
int main()
{
int t , c=0;
cin>>t;
while(c<t){
int col;
cin>>col;
char s[300];

cin>>s;
int l = strlen(s);
int row = l/col;

char a[row][col];
int p = 0,count=0;
while(p <row ){
if(p%2 == 0){
{for(int j = 0 ; j < col; j++){ a[p][j] = s[count]; count++;  }}
}
else{
{for(int j = col-1 ; j >= 0; j--){ a[p][j] = s[count]; count++;  }}
}

p++;
}
for(int i = 0; i < col; i++){for(int j= 0; j < row; j++){ cout<<a[j][i];}}
cout<<endl;c++;}
return 0;
}
