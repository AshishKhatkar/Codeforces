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
ll ar[200005];
int main()
{
	ll n, a;
	cin>>n>>a;
	int i;
	ll s = 0;
	rep(i, 0, n - 1)
	{
		cin>>ar[i];
		s += ar[i];
	}
	ll res;
	rep(i, 0, n - 1)
	{
		res = 0;
		res += max(ar[i] - a + n - 1, 0LL);
		res += max(a - s + ar[i] - 1, 0LL);
		cout<<res<<" ";
	}
	cout<<endl;
	return 0;
}