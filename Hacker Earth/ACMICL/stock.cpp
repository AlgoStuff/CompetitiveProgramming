/***********************************************************************/
//                                                                          
//  INFINITUM                                                           
//  Rakesh Mahadasa                                                     
//  National Institute of Technology , Calicut                      
//  problem link : https://www.hackerearth.com/ACMICL/algorithm/5-stock-market/
//  Concept : DP
//  Reference : http://www.geeksforgeeks.org/stock-buy-sell/
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
typedef long long int ll;
typedef long int li;

#define MOD7 1000000007
#define MOD9 1000000009
#define PI 3.14159265


using namespace std;

ll gcd(ll a,ll b){
    while(b){
        ll temp = b;
        b=a%b;
        a=temp;
    }
    return a;
}


struct Interval
{
    int buy;
    int sell;
};

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int price[], int n)
{
    // Prices must be given for at least two days
    if (n == 1)
        return;

    int count = 0; // count of solution pairs

    // solution vector
    Interval sol[n/2 + 1];

    // Traverse through given price array
    int i = 0;
    while (i < n-1)
    {
        // Find Local Minima. Note that the limit is (n-2) as we are
        // comparing present element to the next element. 
        while ((i < n-1) && (price[i+1] <= price[i]))
            i++;

        // If we reached the end, break as no further solution possible
        if (i == n-1)
            break;

        // Store the index of minima
        sol[count].buy = i++;

        // Find Local Maxima.  Note that the limit is (n-1) as we are
        // comparing to previous element
        while ((i < n) && (price[i] >= price[i-1]))
            i++;

        // Store the index of maxima
        sol[count].sell = i-1;

        // Increment count of buy/sell pairs
        count++;
    }

    // print solution
    if (count == 0)
        cout<<endl;
    else
    {
     for (int i = 0; i < count; i++)
      printf("%d %d\n", sol[i].buy, sol[i].sell);
}

return;
}

int main(){
    int n;
    cin>>n;
    int p[n];
    for(int i = 0; i < n;i++){
        cin>>p[i];
    }
    stockBuySell(p,n);
    return 0;
}