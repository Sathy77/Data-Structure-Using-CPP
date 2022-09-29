#include<iostream>
#include<vector>
#include<queue>
using namespace std;
#define MX 110

vector<int>graph[MX];
bool visi[MX];
int dis[MX];

void bfs (int source)
{
    queue<int> Q;
    visi[source]=1;
    dis[source]=0;
    Q.push(source);

    while(!Q.empty())
    {
        int node= Q.front();
        Q.pop();
        for(int i=0; i<graph[node].size(); i++)
        {
            int next= graph[node][i];
            if(visi[next]==0)
            {
                visi[next]=1;
                dis[next]=dis[node]+1;
                Q.push(next);
            }
        }
    }
}

int main()
{
    int nods, edgs;
    cin >>nods>>edgs;
    for(int i=1; i<=edgs; i++)
    {
        int u, v;
        cin>>u>>v;
        graph[v].push_back(u);
        graph[u].push_back(v);
    }
    int source;
    cin>>source;
    bfs(source);
    cout<<"From nods "<<source<<endl;
    for(int i=1; i<=nods; i++)
        cout<<"Distance of "<<i<<" is: "<<dis[i]<<endl;
    return 0;
}
