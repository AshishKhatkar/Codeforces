/*
ID: ashish1610
PROG: Dungeons and Candies
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
char ar[1005][15][15];
int n,m,k,w;
int comp_diff(int x, int y)
{
    int diff=0;
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=m;++j)
        {
            if(ar[x][i][j]!=ar[y][i][j])
                diff++;
        }
    }
    return diff;
}
struct node
{
    int src;
    int dest;
    int wght;
};
int par[1005], rank[1005];
int Find(int src)
{
    if(par[src]!=src)
        par[src]=Find(par[src]);
    return par[src];
}
int Union(int p1, int p2)
{
    if(rank[p1]<rank[p2])
        par[p1]=p2;
    else if(rank[p1]>rank[p2])
        par[p2]=p1;
    else
    {
        par[p2]=p1;
        rank[p1]++;
    }
}
bool compare(node n1, node n2)
{
    return n1.wght<n2.wght;
}
bool fin[1005];
vector<int> adj[1005];
bool visited[1005];
void dfs(int src)
{
    visited[src]=true;
    for(int i=0;i<adj[src].size();++i)
    {
        if(!visited[adj[src][i]])
        {
            cout<<adj[src][i]+1<<" "<<src+1<<endl;
            dfs(adj[src][i]);
        }
    }
}
void mdfs()
{
    for(int i=0;i<k;++i)
    {
        if(!visited[i])
        {
            cout<<i+1<<" "<<0<<endl;
            dfs(i);
        }
    }
}
vector<node> mst;
void kruskal(vector<node> graph, int size)
{
    memset(visited,false,sizeof(false));
    memset(fin,false,sizeof(fin));
    vector<int> abc;
    int total_cst=0;
    sort(graph.begin(),graph.end(),compare);
    for(int i=0;i<size;++i)
    {
        par[i]=i;
        rank[i]=0;
    }
    int edge_count=0,vertex_count=0;
    for(int i=0;i<graph.size();++i)
    {
        node next_edge=graph[i];
        int x=Find(next_edge.src);
        int y=Find(next_edge.dest);
        if(x!=y)
        {
            mst.push_back(next_edge);
            total_cst+=next_edge.wght;
            Union(x,y);
            adj[next_edge.src].push_back(next_edge.dest);
            adj[next_edge.dest].push_back(next_edge.src);
        }
    }
    cout<<n*m*k+total_cst<<endl;
    mdfs();
}
int main()
{
    cin>>n>>m>>k>>w;
    for(int i=1;i<=k;++i)
    {
        for(int j=1;j<=n;++j)
        {
            for(int l=1;l<=m;++l)
                cin>>ar[i][j][l];
        }
    }
    vector<node>graph;
    for(int i=1;i<=k;++i)
    {
        for(int j=i+1;j<=k;++j)
        {
                int cst=w*comp_diff(i,j);
                if(cst-n*m<0)
                {
                    node temp;
                    temp.src=j-1;
                    temp.dest=i-1;
                    temp.wght=cst-n*m;
                    graph.push_back(temp);
                }
        }
    }
    kruskal(graph,k);
    return 0;
}
