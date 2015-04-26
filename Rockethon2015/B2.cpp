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
#define sl(a)			scanf("%I64d", &a)
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
ll ar[55];
void solve(ll i, ll j, ll m)
{
	if(i == j)
	{
		ar[i]=1;
		return;
	}
	else if((1LL << (j - i - 1)) >= m)
	{
		ar[i]=0;
		solve(i + 1, j, m);
	}
	else
	{
		ar[j]=0;
		solve(i, j - 1, m - (1LL << (j - i - 1)));
	}
	int k;
	rep(k, i, j)
		ar[k]++;
	return;
}
int main()
{
	ll n, m, i, j, k;
	sl(n);
	sl(m);
	solve(0, n - 1, m);
	rep(i, 0, n - 1)
		cout<<ar[i]<<" ";
	cout<<endl;
	return 0;
}