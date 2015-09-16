//UPSIDE down question

#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
int t,c=0;
cin>>t;
while(c<t){
char s[100];
cin>>s;
int l = strlen(s),p=1,i=0;
for(;i < l;i++)
{if(s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '7') {cout<<"NO";p=0; break;} }
if( p) {cout<<"YES"<<endl; for(int j = l-1 ; j >= 0; j--){ if( s[j] == '6'){cout<<'9';} if( s[j] == '9'){cout<<'6';}
else {cout<<s[j];} } }
cout<<endl;
c++;
}
return 0;
}
