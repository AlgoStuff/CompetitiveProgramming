#include<iostream>
#include<algorithm>
using namespace std;
typedef long long int ll;
	ll num=1,box = 1,sum,k,n;
			ll boxes[100000],trace[100000] ;
			void swap(ll *p1,ll *p2)
{ll temp;
 temp = *p1;
 *p1=*p2; 
  *p2 =temp;
  
}
void merge(ll*,ll*,ll,ll,ll);
void mergesort(ll *a, ll*b, ll low, ll high)
{
    ll pivot;
    if(low<high)
    {
        pivot=(low+high)/2;
        mergesort(a,b,low,pivot);
        mergesort(a,b,pivot+1,high);
        merge(a,b,low,pivot,high);
    }
}
void merge(ll *a, ll *b, ll low, ll pivot, ll high)
{
    ll h,i,j,k;
    h=low;
    i=low;
    j=pivot+1;

    while((h<=pivot)&&(j<=high))
    {
        if(a[h]<=a[j])
        {
            b[i]=a[h];
            swap(&trace[i],&trace[h]);
            h++;
        }
        else
        {
            b[i]=a[j];
                        swap(&trace[i],&trace[j]);
            j++;
        }
        i++;
    }
    if(h>pivot)
    {
        for(k=j; k<=high; k++)
        {
            b[i]=a[k];
                        swap(&trace[i],&trace[k]);
            i++;
        }
    }
    else
    {
        for(k=h; k<=pivot; k++)
        {
            b[i]=a[k];
                                    swap(&trace[i],&trace[k]);
            i++;
        }
    }
    for(k=low; k<=high; k++) a[k]=b[k];
}
int main(){

	cin>>n;
	cin>>k;
	ll a[n];
	ll b[n];
	for(ll i = 0; i < n ; i++){
		cin>>a[i];
		boxes[i]=0;
		trace[i]=i;
	}
	mergesort(a,b,0,n-1);
	sum = 0;

	ll j =0;
	for(ll i = 0 ; i < n; i ++){
		sum =  sum + a[i];
		boxes[j]++;
		if(sum > k){
			sum = 0;
			boxes[j]--;
			box++;
			i--;
			j++;
		}
	}
	cout<<box<<endl;
		sum = 0;
	bool check = true;
	j =0;
	for(ll i = 0 ; i < n; i ++){
		if(check) cout<<boxes[j]<<" ";
		sum = sum + a[i];
		if(sum <= k){
			check = false;
			cout<<trace[i]<<" ";
		}
		if(sum > k){
			check = true;
			num++;
			sum = 0;
			box++;
			i--;
			j++;
			cout<<endl;
		}
	}
	cout<<endl;
	return 0;
	}
