#include <bits/stdc++.h>

using namespace std;

void dfs(int start, vector<int>* graph, bool* visited)
{
    stack <int> s;
    s.push(start);
    while(!s.empty())
    {
        int v = s.top();
        s.pop();
        visited[v] = true;
        for(int i=0;i<(int)graph[v].size();i++)
        {
            if(!visited[graph[v][i]])
            {
                s.push(graph[v][i]);
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        bool visited[n];
        for(int i=0;i<n;i++)
            visited[i] = false;

        vector <int> graph[n];
        int e;
        cin >> e;
        for(int i=0;i<e;i++)
        {
            int a,b;
            scanf("%d %d",&a,&b);
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        
        int components = 0;
        for(int i =0; i< n;i++)
        {
            if(!visited[i])
            {
                components++;
                dfs(i,graph,visited);
            }
        }
        printf("%d\n", components);
    }
    return 0;
}
