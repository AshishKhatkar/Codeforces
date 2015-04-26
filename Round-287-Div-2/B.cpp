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
int main()
{
	ll r, x, y, x1, y1;
	cin>>r>>x>>y>>x1>>y1;
	ll ans = sqrt((x1 - x) * (x1 - x) + (y1- y) * (y1- y));
	ans /= r;
	ans /= 2;
	if(ans * 2 * r < sqrt((x1 - x) * (x1 - x) + (y1- y) * (y1- y)))
		ans++;
	cout<<ans<<endl;
	return 0;
}