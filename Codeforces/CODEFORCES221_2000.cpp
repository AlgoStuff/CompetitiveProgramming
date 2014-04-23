#include<iostream>

#include<stack>

using namespace std;

int a[501][501];

int lga(int row,int len)  
{  
int area[len]; 
long int n, i, t;  
stack<long int> St; 
bool done;  
  
for (i=0; i<len; i++)  
{  
while (!St.empty())  
{  
   if(a[row][i] <= a[row][St.top()])  
   {  
       St.pop();  
   }  
   else  
       break;  
}  
if(St.empty())  
   t = -1;  
else  
   t = St.top();    
area[i] = i - t - 1;  
St.push(i);  
}  
   
while (!St.empty())  
St.pop();  
  
for (i=len-1; i>=0; i--)  
{  
while (!St.empty())  
{  
   if(a[row][i] <= a[row][St.top()])  
   {  
       St.pop();  
   }  
   else  
       break;  
}  
if(St.empty())  
   t = len;  
else  
   t = St.top();  

area[i] += t - i -1;  
St.push(i);  
}  
  
long int max = 0;  

for (i=0; i<len; i++)  
{  
area[i] = a[row][i] * (area[i] + 1);  
if (area[i] > max)  
   max = area[i];  
}  
  
return max;  
}  
int main(){
int n,m;
cin>>n>>m;
for(int i = 0 ; i < n ; i++){
for(int j  = 0 ; j < m; j++){
cin>>a[i][j];
}
}

for(int i = 0 ; i < n ; i++){
for(int j  = 0 ; j < m; j++){
if(a[i][j] == 1)
a[i][j] = a[i-1][j]+1;
}
}
long int res = 0;
for(int i = 0 ; i < n ; i++){
long int maxi = lga(i,m);
if(maxi>res){
res = maxi;
}
}
cout<<res<<endl;
return 0;
}
