/*  Problem C   */
/*  ashish1610  */
#include <bits/stdc++.h>
using namespace std;
int n;
int initial[100000];
int final[100000];
vector<int> edge[100000];
vector<int> final_ans;
int dfs(int i,int x,int y,int z)
{
    int ans = 0;
    if(initial[i]^z != final[i])
    {
        z ^= 1;
        ans++;
        final_ans.push_back(i+1);
    }
    for(int j=0;j<edge[i].size();j++)
    {
        if(edge[i][j]==x)
            continue;
        ans += dfs(edge[i][j],i,z,y);
    }
    return ans;
}
int main() 
{
    cin>>n;
    int u,v;
    for(int i=0;i<n-1;i++){
        cin>>u>>v;
        edge[u-1].push_back(v-1);
        edge[v-1].push_back(u-1);
    }
    for(int i=0;i<n;i++)
        cin>>initial[i];
    for(int i=0;i<n;i++)
        cin>>final[i];
    dfs(0,-1,0,0);
    cout<<final_ans.size()<<endl;
    for(int i=0;i<final_ans.size();i++)
        cout<<final_ans[i]<<endl;
    return 0;
}
