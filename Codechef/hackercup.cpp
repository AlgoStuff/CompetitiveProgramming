#include<iostream>
#include<string.h>
#include<stdio.h>
#include<fstream>
using namespace std;
void merge(int*,int*,int,int,int);
void mergesort(int *a, int*b, int low, int high)
{
    int pivot;
    if(low<high)
    {
        pivot=(low+high)/2;
        mergesort(a,b,low,pivot);
        mergesort(a,b,pivot+1,high);
        merge(a,b,low,pivot,high);
    }
}
void merge(int *a, int *b, int low, int pivot, int high)
{
    int h,i,j,k;
    h=low;
    i=low;
    j=pivot+1;

    while((h<=pivot)&&(j<=high))
    {
        if(a[h]<=a[j])
        {
            b[i]=a[h];
            h++;
        }
        else
        {
            b[i]=a[j];
            j++;
        }
        i++;
    }
    if(h>pivot)
    {
        for(k=j; k<=high; k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    else
    {
        for(k=h; k<=pivot; k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    for(k=low; k<=high; k++) a[k]=b[k];
}

int main()
{
int t;
cin>>t;
int c = 0 ;
int pro[t];
for(int i = 0 ; i <t ; i++){ pro[i] = 0;}
char str[500];
gets(str);
while(c < t){
gets(str);
int l = strlen(str);
int i = 0;
int count[26];
for(int j = 0; j <26;j++){count[j] = 0;}
while(i < l){
switch(str[i]){
case ('a'):
           count[0]++;
           break;
case ('b'):
           count[1]++;
           break;
case ('c' ):
           count[2]++;
           break;
case ('d' ):
           count[3]++;
           break;
case ('e'):
           count[4]++;
           break;
case ('f'):
           count[5]++;
           break;
case ('g' ):
           count[6]++;
           break;
case ('h' ):
           count[7]++;
           break;
case ('i'):
           count[8]++;
           break;
case ('j' ):
           count[9]++;
           break;
case ('k'):
           count[10]++;
           break;
case ('l'):
           count[11]++;
           break;
case ('m'):
           count[12]++;
           break;
case ('n'):
           count[13]++;
           break;
case ('o'):
           count[14]++;
           break;
case ('p'):
           count[15]++;
           break;
case ('q'):
           count[16]++;
           break;
case ('r'):
           count[17]++;
           break;
case ('s'):
           count[18]++;
           break;
case ('t'):
           count[19]++;
           break;
case ('u'):
           count[20]++;
           break;
case ('v'):
           count[21]++;
           break;
case ('w'):
           count[22]++;
           break;
case ('x'):
           count[23]++;
           break;
case ('y'):
           count[24]++;
           break;
case ('z'):
           count[25]++;
           break;
case ('A'):
           count[0]++;
           break;
case ('B'):
           count[1]++;
           break;
case ('C' ):
           count[2]++;
           break;
case ('D' ):
           count[3]++;
           break;
case ('E'):
           count[4]++;
           break;
case ('F'):
           count[5]++;
           break;
case ('G' ):
           count[6]++;
           break;
case ('H' ):
           count[7]++;
           break;
case ('I'):
           count[8]++;
           break;
case ('J' ):
           count[9]++;
           break;
case ('K'):
           count[10]++;
           break;
case ('L'):
           count[11]++;
           break;
case ('M'):
           count[12]++;
           break;
case ('N'):
           count[13]++;
           break;
case ('O'):
           count[14]++;
           break;
case ('P'):
           count[15]++;
           break;
case ('Q'):
           count[16]++;
           break;
case ('R'):
           count[17]++;
           break;
case ('S'):
           count[18]++;
           break;
case ('T'):
           count[19]++;
           break;
case ('U'):
           count[20]++;
           break;
case ('V'):
           count[21]++;
           break;
case ('W'):
           count[22]++;
           break;
case ('X'):
           count[23]++;
           break;
case ('Y'):
           count[24]++;
           break;
case ('Z'):
           count[25]++;
           break;

}
i++;
}
int num;

    num = sizeof(count)/sizeof(int);

    int b[num];
    mergesort(count,b,0,num-1);


for(int i = 0;i < 26 ;i++){ pro[c] = pro[c] + (count[i]*(i+1));}

c++;}

for(int i = 0; i < t ; i++)
{ cout<<"Case #"<<(i+1)<<":"<<" "<<pro[i]<<endl;}
return 0;
} 
