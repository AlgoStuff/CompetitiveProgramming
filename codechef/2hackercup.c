#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
int t;
//cin>>t;
char str[500];
gets(str);
int l = strlen(str);

for(int i = 0; i < l-1 ; i++)
{ if( s[i] == ':') s[i+1] = 'a';}

for(int i = 0; i < l ; i++)
cout<<s[i]<<" ";

return 0;
}
