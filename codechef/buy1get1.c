//#include<iostream>
#include<string.h>
#include<stdio.h>
//using namespace std;
int main()
{
int t,c=0;
scanf("%d",&t);
while(c<t)
{
int count = 0;
string s[200];


scanf("%s",&s);
int l = strlen(s);
int i =0;
for( i = 0; i < l; i++)
{ int j ; 
 for(j = i+1; j < l; j++)
{   if(s[i] == '.'){break;}
    if (s[i] == s[j] ) { count++; s[j] = '.';s[i] = '.'; break; } 
}
}
int k = 0;
for( k = 0 ; k < l; k++) { if(s[k] != '.'){count++; }}
printf("%d",count);
c++; 
}


return 0;
}
