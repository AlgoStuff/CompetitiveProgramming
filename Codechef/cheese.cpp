#include<iostream>
using namespace std;
int n,c=0;
int a[11][11],b[11][11]={0};
void recursive(int p,int q)
{
     if(p==n-1 && q==n-1)
     {
     c++;
     return;
     }
         b[p][q]=1;
         if(p>0 && a[p-1][q]==0 && b[p-1][q]==0)
         {
                recursive(p-1,q);
         }
         if(q>0 && a[p][q-1]==0 && b[p][q-1]==0)
         {
                recursive(p,q-1);
         }
         if(p<n-1 && a[p+1][q]==0 && b[p+1][q]==0)
         {
                recursive(p+1,q);
         }
         if(q<n-1 && a[p][q+1]==0 && b[p][q+1]==0)
         {
                recursive(p,q+1);
         }
         b[p][q]=0;
}
int main()
{
              cin>>n;
              //int a[n][n];
              for(int i=0;i<n;i++)
              {
                      for(int j=0;j<n;j++)
                      {
                              cin>>a[i][j];
                      }
              }
              recursive(0,0);
              cout<<c<<endl;
}
