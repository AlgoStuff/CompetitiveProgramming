#include<iostream> 
#include<cstdio>
#include<vector>
#include<cmath> 
#define pb push_back
 
using namespace std; 
int main()
{  
   //Write your code here
   //Include headers as needed 
int t;
  cin>>t;
  while(t--)
  {
   long long n,ans=1,cur=2;
   
    cin>>n;
    long long s=sqrt(n),i=n;
    
    while(i>1)
    {   
      if(cur>s)
      {       
                ans*=i;     
        break;
      }
      
        int count=0;
        while(i%cur==0)
        {
        count++;
        i/=cur;
        }        
        
        if(count%2==1) ans*=cur;
         
        if(cur%2==1)cur+=2;
        else cur++;
    }    
       
    cout<<ans<<endl;    
  }
} 
 
