#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <limits>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cassert>
using namespace std;

#define mp make_pair
#define MAX 100005

typedef struct ele
{
    int v1,v2;
}ele;



int  main()
{
    int n;
    cin>>n;
    assert(n>=1&&n<=100000);
    vector<int>a(n);


    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        assert(a[i]>=0 && a[i]<=1000000000);
        a[i]=-a[i];
    }


    stack< pair<int,int> >s;
    int maxa=0;
    cout<<"Editorial"<<endl;
    for(int  i=0;i<n;i++)
    {
        if(s.empty())
        {
            s.push(mp(a[i],0));
        }
        else
        {
            pair <int , int> temp=s.top();

            if(a[i]<temp.first)
            {
                int sc=1;
                maxa=max(maxa,sc);
                s.push(mp(a[i],sc));
                cout<<"PUSH : "<<a[i]<<" DAY : "<<sc<<endl;
            }
            else
            {

                pair <int , int> v=s.top();
                int pr=v.second;
                while(!s.empty()&&v.first<=a[i])
                {
                    cout<<"pop : "<<v.first<<" DAY : "<<v.second<<endl;
                    s.pop();
                    if(s.empty())
                        break;
                    pr=max(pr,v.second);
                    v=s.top();
                }

                if(s.empty())
                {
                    s.push(mp(a[i],0));
                    cout<<"PUSH : "<<a[i]<<" DAY : "<<0<<endl;
                }

                else
                {
                    s.push(mp(a[i],pr+1));
                    cout<<"PUSH : "<<a[i]<<" DAY : "<<pr+1<<endl;
                    maxa=max(maxa,pr+1);
                }


            }
        }
    }
    cout<<maxa<<endl;
}
