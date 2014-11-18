/*
ID: ashish1610
PROG:
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
#define ll	long long int
#define MOD	1000000007
vector<int> adj[3005];
ll ar[3005];
int main()
{
	ios_base::sync_with_stdio(false);
	int n,m,x,y;
	cin>>n>>m;
	for(int i=0;i<m;++i)
	{
		cin>>x>>y;
		x--;
		y--;
		adj[x].push_back(y);
	}
	ll ans=0;
	for(int i=0;i<n;++i)
	{
		memset(ar,0,sizeof(ar));
		for(int j=0;j<adj[i].size();++j)
			for(int k=0;k<adj[adj[i][j]].size();++k)
				ar[adj[adj[i][j]][k]]++;
		for(int j=0;j<n;++j)
			if(i!=j)
				ans+=(1LL*((ar[j]*(ar[j]-1))/2));
	}
	cout<<ans<<endl;
	return 0;
}