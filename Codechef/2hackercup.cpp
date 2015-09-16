#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
int t,c=0;
cin>>t;
char str[500];
char p[t];
for(int i = 0 ; i <t ; i++){ p[i] = 'y';}
gets(str);
while(c < t){
gets(str);
int l = strlen(str);


for(int i = 0; i < l ; i++)
 { if(str[i] == '(')
        { for(int j = i+1; j < l; j++){
               if(str[j] == ')' && str[j-1] != ':'){ str[i] = 'a';
                                  str[j] ='a';
                                  break;}}}}


for(int i = 0; i < l ; i++)
 { if(str[i] == '(')
        { for(int j = i+1; j < l; j++)
               if(str[j] == ')'){ str[i] = 'a';
                                  str[j] ='a';
                                  break;}}}



for(int i = 0; i < l-1 ; i++)
{ if( str[i] == ':') {str[i] = 'a'; str[i+1] = 'a';}}


for(int i = 0; i < l ; i++){if(str[i] == ')' || str[i] == '('){p[c] = 'n'; break;}
                             }
c++;}
for(int i = 0; i < t ; i++)
{ if (p[i] == 'y')cout<<"Case #"<<(i+1)<<":"<<" YES"<<endl;
else {cout<<"Case #"<<(i+1)<<":"<<" NO"<<endl;}}
return 0;
}
