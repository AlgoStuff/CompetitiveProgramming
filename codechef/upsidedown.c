//UPSIDE down question

//#include<iostream>
#include<string.h>
#include<stdio.h>
//using namespace std;
int main()
{
int t,c=0,j;
scanf("%d",&t);
while(c<t){
char s[100];
scanf("%c",&s);
int l = strlen(s),p=1,i=0;
for(;i < l;i++)
{if(s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '7') {printf("NO");p=0; break;} }
if( p) {printf("YES\n"); for(j = l-1 ; j >= 0; j--){ if( s[j] == '6'){printf("%c",'9');} if( s[j] == '9'){printf("%c",'6');}
else {printf("%c",s[j]);} } }
printf("\n");
c++;
}
return 0;
}
