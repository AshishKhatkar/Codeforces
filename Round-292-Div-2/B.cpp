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
int ar[105], ar1[105];
int main()
{
	int n, m, i, tmp, tmp1;
	cin>>n>>m;
	int b;
	cin>>b;
	memset(ar, 0, sizeof(ar));
	memset(ar1, 0, sizeof(ar1));
	rep(i, 0, b - 1)
	{
		cin>>tmp;
		ar[tmp] = 1;
	}
	int g;
	cin>>g;
	rep(i, 0, g - 1)
	{
		cin>>tmp;
		ar1[tmp] = 1;
	}
	rep(i, 0, 2 * n * m - 1)
	{
		if(ar[i % n])
			ar1[i % m] = 1;
		else if(ar1[i % m])
			ar[i % n] = 1;
	}
	rep(i, 0, n - 1)
	{
		if(!ar[i])
		{
			cout<<"No\n";
			return 0;
		}
	}
	rep(i, 0, m - 1)
	{
		if(!ar1[i])
		{
			cout<<"No\n";
			return 0;
		}
	}
	cout<<"Yes\n";
	return 0;
}