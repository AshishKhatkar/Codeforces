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
#define sl(a)			scanf("%lld", &a)
#define pi(a)			printf("%d", a)
#define pl(a)			printf("%lld", a)
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
vector<int> adj[200005];
ll res[200005][2];
ll val[200005];
void dfs(int nd)
{
	ll ans1 = 0, ans2 = -1000000000000LL;
	int i;
	rep(i, 0, (int)(adj[nd].size()) - 1)
	{
		int ch = adj[nd][i];
		dfs(ch);
		ll tmp = ans1;
		ans1 = max(ans1 + res[ch][0], ans2 + res[ch][1]);
		ans2 = max(tmp + res[ch][1], ans2 + res[ch][0]);
	}
	res[nd][0] = ans1;
	res[nd][1] = max(ans2, ans1 + val[nd]);
}
int main()
{
	int n, i, par, root = 0;
	cin>>n;
	rep(i, 0, n - 1)
	{
		cin>>par>>val[i];
		if(par == -1)
			root = i;
		else
			adj[par - 1].push_back(i);
	}
	dfs(root);
	cout<<max(res[root][0], res[root][1])<<endl;
	return 0;
}