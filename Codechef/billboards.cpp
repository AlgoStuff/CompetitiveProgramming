#include <iostream>

using namespace std;

void merge(long int*,long int*,long int,long int,long int);
void mergesort(long int *a,long int*b,long int low,long int high)
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
void merge(long int *a,long  int *b,long int low,long int pivot,long int high)
{
    long int h,i,j,k;
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
    long int n1,k,count = 0;

    cin>>n1;
    cin>>k;
    long int in[n1][1],a[n1];

    for(long int i = 0; i < n1 ; i++){ cin>>in[i][1];}
    for(long int i = 0; i < n1 ; i++){ a[i] = in[i][1];}
   long int num;

    num = sizeof(a)/sizeof(long int);

    long int b[num];
    
    mergesort(a,b,0,num-1);

    for(long int i=k; i<num; i++)
        count = count + a[i];
    cout<<count;
}
