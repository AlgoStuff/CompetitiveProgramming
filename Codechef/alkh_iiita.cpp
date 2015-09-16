#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
long int sequence(long int numbers[],long int size)
{
      long int max_so_far  = numbers[0], max_ending_here = numbers[0];
        for(long int i = 1; i < size; i++)
        {
                if(max_ending_here > 0)
                {
                        max_ending_here = numbers[i];
                }
                else
                {
                        max_ending_here += numbers[i];
                }
                if(max_ending_here <= max_so_far )
                {
                        max_so_far  = max_ending_here;
                }
        }
        return max_so_far ;
}
int main(){
int t;
scanf("%d",&t);
while(t--){
long int n;
scanf("%ld",&n);
long int a[n];
long int sum = 0;
for(long int i = 0 ; i < n;i++){
scanf("%ld",&a[i]);
sum += a[i];
}
long int ss = sequence(a,n);
if(ss<0){
ss*=-1;
printf("%ld\n",sum+2*ss);}
else{
printf("%ld\n",sum);}
}
return 0;
}
