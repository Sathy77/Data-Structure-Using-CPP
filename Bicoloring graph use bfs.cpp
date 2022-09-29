#include<iostream>
#include<vector>
#include<queue>

using namespace std;
#define Mx 110

vector <int> graph[Mx];
int color[Mx]; //1= white, 0=black
int flag=0;

void Bicolor(int source)
{
    queue<int> Q;
    Q.push(source);
    while(!Q.empty())
    {
        int node=Q.front();
        Q.pop();
        for(int i=0; i<graph[node].size(); i++)
        {
            int next=graph[node][i];
            if(color[next]!=color[node])
            {
                Q.push(next);
            }
            else
            {
                flag=1;
                break;
            }
        }
    }

}

int main()
{
    int Nodes, edges;
    cin>>Nodes>>edges;

    for(int i=1; i<=edges; i++)
    {
        int u, v;
        cin>>u>>v;
        graph[v].push_back(u);
        graph[u].push_back(v);
    }


    for(int i=1; i<=Nodes; i++)
        cin>>color[i];

    int source;
    cin>>source;
    Bicolor(source);
    if (flag==0)
        cout<<"graph is Bicolor"<< endl;
    else
        cout<<"graph is not Bicolor"<<endl;


    return 0;
}
