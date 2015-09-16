#include<iostream>
using namespace std;
int main()

{
      int a[15][15],n,i,j,k,c;



cin>>n;
c = n*n;
if(n%2 == 0){
for(k=0;k<n/2;k++)

{

         for(i=k;i<n-k;i++)

                 {

                  a[k][i]=c;

                  c--;

                }

               for(i=k+1;i<=n-k-1;i++)

                    {

                       a[i][n-k-1]=c;

                       c--;

                    }

                for(i=n-k-1-1;i>=k;i--)

                    {

                       a[n-k-1][i]=c;

                       c--;

                    }

               for(i=n-k-1-1;i>k;i--)

                  {

                     a[i][k]=c;

                     c--;

                 }

         }

               if(n%2!=0)

               {

                  a[(n/2)][(n/2)]=c;

                  c--;

                }

           for(i=0;i<n;i++)

            {

            

            for(j=0;j<n;j++)

            cout<<a[i][j]<<" ";
		cout<<endl;
            }}
else{
for(k=n-1;k>n/2;k--)

{

         for(i=k;i>=n-k-1;i--)

                 {

                  a[k][i]=c;

                  c--;

                }

               for(i=k-1;i>=n-k-1;i--)

                    {

                       a[i][n-k-1]=c;

                       c--;

                    }

                for(i=n-k;i<=k;i++)

                    {

                       a[n-k-1][i]=c;

                       c--;

                    }

               for(i=n-k;i<k;i++)

                  {

                     a[i][k]=c;

                     c--;

                 }

         }

               if(n%2!=0)

               {

                  a[(n/2)][(n/2)]=c;

                  c--;

                }

           for(i=0;i<n;i++)

            {

            

            for(j=0;j<n;j++)

            cout<<a[i][j]<<" ";
		cout<<endl;
            }







}
            return 0;

}
