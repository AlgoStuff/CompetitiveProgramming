#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
int t,c=0;
cin>>t;
while(c<t)
{
int count = 0;
char s[300];
cin>>s;
int l = strlen(s);
if(l >= 1 && l <=200){
for(int i = 0; i < l; i++)
{  for(int j = i+1; j < l; j++)
{   if(s[i] == '.'){break;}
    if (s[i] == s[j] ) { count++; s[j] = '.';s[i] = '.'; break; } 
}
}
for(int i = 0 ; i < l; i++) { if(s[i] != '.'){count++; }}}
cout<<count<<endl;
c++; 
}


return 0;
}
