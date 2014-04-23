#include<iostream>
#include<fstream>
#include<stack>
using namespace std;
int ROW = 5000;
int COL = 5000;

int largestArea(int arr[], int len)  
{  
int area[len]; //initialize it to 0  
int n, i, t;  
stack<int> St;  //include stack for using this #include<stack>  
bool done;  
  
for (i=0; i<len; i++)  
{  
while (!St.empty())  
{  
   if(arr[i] <= arr[St.top()])  
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
//Calculating Li  
area[i] = i - t - 1;  
St.push(i);  
}  
  
//clearing stack for finding Ri  
while (!St.empty())  
St.pop();  
  
for (i=len-1; i>=0; i--)  
{  
while (!St.empty())  
{  
   if(arr[i] <= arr[St.top()])  
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
//calculating Ri, after this step area[i] = Li + Ri  
area[i] += t - i -1;  
St.push(i);  
}  
  
int max = 0;  
//Calculating Area[i] and find max Area  
for (i=0; i<len; i++)  
{  
area[i] = arr[i] * (area[i] + 1);  
if (area[i] > max)  
   max = area[i];  
}  
  
return max;  
}  
int find(int A[500][500])  
{  
 int i, j;  
 int max, cur_max;  
 cur_max = 0;  
  
 //Calculate Auxilary matrix  
 for (i=1; i<ROW; i++)  
     for(j=0; j<COL; j++)  
     {  
         if(A[i][j] == 1)  
             A[i][j] = A[i-1][j] + 1;  
     }  
  
 //Calculate maximum area in S for each row  
 for (i=0; i<ROW; i++)  
 {       
     max = largestArea(A[i], COL);  
     if (max > cur_max)  
         cur_max = max;  
 }  
  
 //Regenerate Oriignal matrix  
 for (i=ROW-1; i>0; i--)  
     for(j=0; j<COL; j++)  
     {  
         if(A[i][j])  
             A[i][j] = A[i][j] - A[i-1][j];  
     }  
  
 return cur_max;  
}  



int main(){
int n,m;
cin>>n>>m;
int a[500][500];
for(int i = 0 ; i < n ; i++){
for(int j  = 0 ; j < m; j++){
cin>>a[i][j];
}
}

cout<<find(a)<<endl;



}
