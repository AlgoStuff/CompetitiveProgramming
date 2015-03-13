#include<iostream>
#include<fstream>
#include<sstream>
#include<ctime>
#include<string.h>
#include<cstdlib>
#define MAX 100000000
using namespace std;
typedef long long int ll;
class results
{
 public: int s1,s2,s3;
 string name;
 

 public: int su;
 
};
results b[1000000];
void sswap(string *ptr1,string *ptr2)

{
  string temp;
  temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 =temp;
}

void swap(int *ptr1, int *ptr2)

{
  int temp;
  temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 =temp;
}
void selectionsort(results *s,ll start,ll end)
{

int small,temp,p,check = 0;
 
for (int i = start; i < end-1 ; i ++){
         check = 0;
         small = s[i].su;
               for(int j = i; j < end; j ++){

             if(small > s[j].su){// p = j;
                               small = s[j].su;

                               p = j;
              check = 1; }}
     if(check){ 
       swap(&s[i].su,&s[p].su);
     
                      sswap(&s[i].name,&s[p].name);} }

 

}

void merge(results *a,ll low, ll pivot, ll high)
{
    ll h,i,j,k;
    h=low;
    i=low;
    j=pivot+1;
  
    while((h<=pivot)&&(j<=high))
    {
        if(a[h].su<=a[j].su)
        {
            b[i].su=a[h].su;
            b[i].name=a[h].name;
            h++;
        }
        else
        {
            b[i].su=a[j].su;
          b[i].name=a[j].name;
            j++;
        }
        i++;
    }
    if(h>pivot)
    {
        for(k=j; k<=high; k++)
        {
            b[i].su=a[k].su;
          b[i].name=a[k].name;
            i++;
        }
    }
    else
    {
        for(k=h; k<=pivot; k++)
        {
            b[i].su=a[k].su;
            b[i].name=a[k].name;
            i++;
        }
    }
    for(k=low; k<=high; k++) {a[k].su=b[k].su;
    
    a[k].name=b[k].name;
}
}

void kwaymerge(results *s,ll size){
int k;
cout<<"Enter k : ";
cin>>k;
ll j =0;


selectionsort(s,0,size/k);
selectionsort(s,size-(size/k),size);
merge (s,0,size/k-1,size-1);
}




int main(){

results s[100000];
ll n;


ifstream fin;
 fin.open("input.txt");
 fin>>n;
for(int  i = 0 ; i < n; i++){ fin>>s[i].name>>s[i].s1>>s[i].s2>>s[i].s3;}
for(int  i = 0 ; i < n ; i++){ s[i].su = s[i].s1+s[i].s2+s[i].s3;
                                //a[i] = s[i].su;
 }
ofstream fout;
 fout.open("output.txt");

int small,temp,p,check = 0;
string smalls;
for (int i = 0; i < n-1 ; i ++){
         check = 0;
         smalls = s[i].name;
               for(int j = i; j < n; j ++){

             if(smalls > s[j].name){// p = j;
                               smalls = s[j].name;
                               p = j;
              check = 1; }}
     if(check){ swap(&s[i].su,&s[p].su);
    
     
                      sswap(&s[i].name,&s[p].name);} }


kwaymerge(s,n);

for(int  i = 0 ; i < n; i++){ fout<<b[i].name<<" "<<b[i].su<<endl;}


return 0;
}
