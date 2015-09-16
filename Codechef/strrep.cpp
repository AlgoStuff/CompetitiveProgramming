#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
char str[100],s1[100],s2[100];
cout<<"enter string1: ";
gets(str);
cout<<"enter string2: ";
gets(s1);
cout<<"enter string3: ";
gets(s2);

int i,l,k,f,j,l1,l2,t;
l=strlen(str);
l1=strlen(s1);
l2=strlen(s2);
for(i=0;i<l-l1+1;i++)
if(s1[0]==str[i])
{
	k=1;	
	if(l1!=1)	
	while((s1[k]==str[i+k]) && (k<l1))
	k++;
	if(k==l1)
	f=1;
	else
	f=0;	
	
	if(f)
	{
	if(l1>l2)
	{
	int p=i;
	for(t=0;t<l-l1+1;t++)
	str[p+t+l2]=str[p+t+l1];
	
	}
	if(l1<l2)
	{
	for(t=0;t<l-i-l1;t++)
	str[l+l2-l1-t-1]=str[l-t-1];
	str[l+l2-l1]='\0';
	
	}
	for(j=i;s2[j-i]!='\0';j++)
	str[j]=s2[j-i];
	l=strlen(str);
	i=i+l2-1;
	} 
}

cout<<"new string is "<<str<<endl;
return 0;
}
