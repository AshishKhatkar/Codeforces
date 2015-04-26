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
#define pl(a)			printf("%I64d", a)
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
map<int, int> mp1, mp2;
int main()
{
	int n, m, k, tmp, i;
	cin>>n>>m>>k;
	rep(i, 0, n - 1)
	{
		cin>>tmp;
		mp1[tmp] = i;
		mp2[i] = tmp;
	}
	ll ans = 0;
	rep(i, 0, m - 1)
	{
		cin>>tmp;
		int ind = mp1[tmp];
		ans += ind / k + 1;
		if(ind == 0)
			continue;
		mp1[tmp] = ind - 1;
		int val = mp2[ind - 1];
		mp1[val] = ind;
		mp1[tmp] = ind - 1;
		mp2[ind] = val;
		mp2[ind - 1] = tmp;
	}
	cout<<ans<<endl;
	return 0;
}