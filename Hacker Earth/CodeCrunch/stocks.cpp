/***********************************************************************/
//                                                                          
//  INFINITUM                                                           
//  Rakesh Mahadasa                                                     
//  National Institute of Technology , Calicut                      
//  problem link : http://www.hackerearth.com/msitcodecrunch/algorithm/ram-and-the-beyblades/
//  Concept : DP
//  Reference : None
//                                                                      
/***********************************************************************/


//header files

#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<iomanip>
#include<cmath>
#include<set>
#include<map>
#include<ctime>

//typedefs

typedef unsigned long long int ull;
typedef long long int lli;
typedef long int li;

#define MOD7 1000000007
#define MOD9 1000000009

using namespace std;




int main(){
    int n;
    cin>>n;
    int a[n];
    int max[n];
    for(int i = 0; i < n;i++){
        cin>>a[i];
    }
    max[n] = -1;
    for(int i = n-1;i>=0;i--){
        if(a[i] > max[i+1]) max[i] = a[i];
        else max[i] = max[i+1];
    }
    int res  = 0;
    for(int i=0;i<n;i++){
        res+= max[i]-a[i];
    }
    cout<<res<<endl;
    return 0;
}
