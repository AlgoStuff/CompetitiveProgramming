#include <bits/stdc++.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int t = 10;
    cout << t << endl;
    while(t--)
    {int n = 1 + (rand()%100000);
    cout << n << endl;
    int e = rand()%(n);
    cout << e << endl;
    while(e--)
    {
        int a = rand()%(n);
        int b = rand()%(n);
        while(a==b)
        {
            b = rand()%n;
        }
        cout << a << " " << b << endl;
    }
    }
}
