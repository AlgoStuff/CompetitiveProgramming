#include<iostream>
using namespace std;
int count=0;
void swap(int *p1,int *p2)
{
count++;
int temp;
 temp = *p1;
 *p1=*p2; 
  *p2 =temp;
  
}
int main()

{


int n;

cin>>n;
int a[n],c=0;

for(int i = 0; i < n ; i++)
{
cin>>a[i];
}
for(int i = 0; i < n -1; i++)
 { 
  if (a[i] < a[i+1]){swap(&a[i],&a[i+1]);
                       }
       
 }

while(1)
{
 int check = 0;
 for(int i = 0; i < n -2; i++)
{
 
 {  if (a[i] > a[i+1]){swap(&a[i],&a[i+1]);
                       check = 1;}
       }
} if (!check) break;

}

cout<<count<<endl;
return 0;
}
