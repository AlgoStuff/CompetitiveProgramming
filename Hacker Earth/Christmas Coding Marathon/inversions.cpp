/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.hackerearth.com/christmas-coding-marathon/algorithm/inversions-revisited/
//	Concept : Merge Sort
//	Reference :	http://www.geeksforgeeks.org/counting-inversions/
//																		
/***********************************************************************/


//header files

#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <set>
#include <map>
#include <ctime>
#include <limits.h>

//typedefs

typedef unsigned long long int ull;
typedef long long int lli;
typedef long int li;

#define MOD7 1000000007
#define MOD9 1000000009
#define PI 3.14159265


using namespace std;


using namespace std;

int  _mergeSort(int arr[], int temp[], int left, int right);
int merge(int arr[], int temp[], int left, int mid, int right);
  
/* This function sorts the input array and returns the
   number of inversions in the array */
int mergeSort(int arr[], int array_size)
{
    int *temp = (int *)malloc(sizeof(int)*array_size);
    return _mergeSort(arr, temp, 0, array_size - 1);
}
  
/* An auxiliary recursive function that sorts the input array and
  returns the number of inversions in the array. */
int _mergeSort(int arr[], int temp[], int left, int right)
{
  int mid, inv_count = 0;
  if (right > left)
  {
    /* Divide the array into two parts and call _mergeSortAndCountInv()
       for each of the parts */
    mid = (right + left)/2;
  
    /* Inversion count will be sum of inversions in left-part, right-part
      and number of inversions in merging */
    inv_count  = _mergeSort(arr, temp, left, mid);
    inv_count += _mergeSort(arr, temp, mid+1, right);
  
    /*Merge the two parts*/
    inv_count += merge(arr, temp, left, mid+1, right);
  }
  return inv_count;
}
  
/* This funt merges two sorted arrays and returns inversion count in
   the arrays.*/
int merge(int arr[], int temp[], int left, int mid, int right)
{
  int i, j, k;
  int inv_count = 0;
  
  i = left; /* i is index for left subarray*/
  j = mid;  /* i is index for right subarray*/
  k = left; /* i is index for resultant merged subarray*/
  while ((i <= mid - 1) && (j <= right))
  {
    if (arr[i] <= arr[j])
    {
      temp[k++] = arr[i++];
    }
    else
    {
      temp[k++] = arr[j++];
  
     /*this is tricky -- see above explanation/diagram for merge()*/
      inv_count = inv_count + (mid - i);
    }
  }
  
  /* Copy the remaining elements of left subarray
   (if there are any) to temp*/
  while (i <= mid - 1)
    temp[k++] = arr[i++];
  
  /* Copy the remaining elements of right subarray
   (if there are any) to temp*/
  while (j <= right)
    temp[k++] = arr[j++];
  
  /*Copy back the merged elements to original array*/
  for (i=left; i <= right; i++)
    arr[i] = temp[i];
  
  return inv_count;
}
 

long long inversions(const vector<int>& a, const vector<int>& b) {
  int n = a.size();
  vector<int> values(a);
  for (int i = 0; i < n;i++) values.push_back(b[i]);
  sort(values.begin(), values.end());
  vector<int> counts(2*n + 1);
  long long res = 0;
  for (int i = n - 1; i >= 0; --i) {
    for (int v = lower_bound(values.begin(), values.end(), b[i]) - values.begin();
         v; 
         v -= v & -v)
      res += counts[v];
    //add 1 to point rank(a[i])
    for (int v = lower_bound(values.begin(), values.end(), b[i]) - values.begin() + 1;
         v <= 2*n;
         v += v & -v)
      counts[v]++;
  }
  return res;
}


int main()
{
  int n;
  cin>>n;
  vector <int> a1(200000);
  vector <int> a2(200000);
  for(int i = 0; i < n;i++){
  	cin>>a1[i];
  }
  for(int i = 0; i < n;i++){
  	cin>>a2[i];
  }
 
  cout<<inversions(a1,a2)<<endl;
  return 0;
}