//#include<iostream>
#include<stdio.h>
#include<stdlib.h>
//using namespace std;
int main()
{
long int t,n,j=1,i;
int *a;
a =(int *)malloc(100000000*sizeof(int));
a[1] = 1;
a[2] = 2;
for( i= 1; i < 30000 ; i ++){
long int c = 0;
while(c<a[i]){ a[j] = i;c++;j++;}
}
scanf("%ld",&t);
long int p = 0;
while (p < t){
scanf("%ld",&n);
printf("%d",a[n]);
printf("\n");}p++;
return 0;
}
