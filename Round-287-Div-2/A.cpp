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
int main()
{
	int n, k, i;
	si(n);
	si(k);
	pii ar[n];
	rep(i, 0, n - 1)
	{
		si(ar[i].first);
		ar[i].second = i + 1;
	}
	sort(ar, ar + n);
	int val = 0;
	vector<int> v;
	i = 0;
	while(i < n && val + ar[i].first <= k)
	{
		val += ar[i].first;
		pb(v, ar[i].second);
		++i;
	}
	cout<<v.size()<<endl;
	rep(i, 0, (int)v.size() - 1)
		cout<<v[i]<<" ";
	cout<<endl;
	return 0;
}