/*
ID: ashish1610
PROG:
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
#define ll	long long int
#define MOD	1000000007
int ar[305], res[305], n;
bool visited[305];
vector<int> adj[305];
vector<int> v;
void dfs(int nd)
{
	visited[nd] = true;
	v.push_back(nd);
	for(int val=0; val<adj[nd].size(); ++val)
		if(!visited[adj[nd][val]])
			dfs(adj[nd][val]);
}
bool compare(int ind1, int ind2)
{
	if(ind1 < ind2)
		return ar[ind1] < ar[ind2];
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin>>n;
	for(int i=0; i<n; ++i)
		cin>>ar[i];
	char ch;
	memset(adj, 0, sizeof(adj));
	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<n; ++j)
		{
			cin>>ch;
			if(ch == '1')
			{
				adj[i].push_back(j);
				adj[j].push_back(i);
			}
		}
	}
	memset(visited, false, sizeof(visited));
	memset(res, 0, sizeof(res));
	for(int i=0; i<n; ++i)
	{
		if(!visited[i])
		{
			v.clear();
			dfs(i);
			vector<int> v1;
			sort(v.begin(), v.end());
			for(int j=0; j<v.size(); ++j)
				v1.push_back(ar[v[j]]);
			sort(v1.begin(), v1.end());
			for(int j=0; j<v1.size(); ++j)
				res[v[j]] = v1[j];
		}
	}
	for(int i=0; i<n; ++i)
		cout<<res[i]<<" ";
	cout<<endl;
	return 0;
}