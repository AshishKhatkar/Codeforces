/*
ID: ashish1610
PROG:
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
#define ll				long long int
#define vi				vector<int>
#define vl				vector<ll>
#define	pii				pair<int,int>
#define pil				pair<int, ll>
#define pll				pair<ll, ll>
#define pli 			pair<ll, int>
#define pb(v, a)		v.push_back(a)
#define mp(a, b)		make_pair(a, b)
#define MOD				1000000007
#define rep(i, a, b)	for(i=a; i<=b; ++i)
#define rrep(i, a, b)	for(i=a; i>=b; --i)
#define si(a)			scanf("%d", &a)
#define pi(a)			printf("%d", a)
#define pn 				printf("\n")
ll pow_mod(ll a, ll b)
{
	ll res = 1;
	while(b)
	{
		if(b & 1)
			res = (res * a) % MOD;
		a = (a * a) % MOD;
		b >>= 1;
	}
	return res;
}
vector<pair<int, int> > adj[105];
bool visited[105];
void dfs(int nd, int col)
{
	visited[nd] = true;
	int ind;
	rep(ind, 0, adj[nd].size() - 1)
	{
		if(adj[nd][ind].second == col)
		{
			if(!visited[adj[nd][ind].first])
				dfs(adj[nd][ind].first, col);
		}
	}
}
int main()
{
	int i, n, m, u, v, c, q, ans;
	// freopen("inp.txt", "r", stdin);
	cin>>n>>m;
	set<int> s;
	rep(i, 1, m)
	{
		cin>>u>>v>>c;
		pb(adj[u], mp(v, c));
		pb(adj[v], mp(u, c));
		s.insert(c);
	}
	vector<int> vec;
	vec.assign(s.begin(), s.end());
	cin>>q;
	int cnt = 0;
	while(q--)
	{
		ans = 0;
		cin>>u>>v;
		if(adj[u].size() == 0)
			cout<<"0\n";
		else
		{
			rep(i, 0, vec.size() - 1)
			{
				memset(visited, false, sizeof(visited));
				dfs(u, vec[i]);
				if(visited[v])
					ans++;
			}
			cout<<ans<<endl;
		}
	}
	return 0;
}