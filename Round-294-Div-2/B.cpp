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
map<ll, int> mp1;
map<ll, int> mp2;
map<ll, int> mp3;
int main()
{
	int n;
	cin>>n;
	int i;
	ll tmp;
	rep(i, 0, n - 1)
	{
		cin>>tmp;
		mp1[tmp]++;
	}
	rep(i, 0, n - 2)
	{
		cin>>tmp;
		mp2[tmp]++;
	}
	ll ans;
	map<ll, int>::iterator it;
	for(it = mp1.begin(); it != mp1.end(); ++it)
	{
		ll val = it->first;
		int cnt = it->second;
		if(mp2[val] != cnt)
		{
			ans = val;
			break;
		}
	}
	cout<<ans<<endl;
	rep(i, 0, n - 3)
	{
		cin>>tmp;
		mp3[tmp]++;
	}
	for(it = mp2.begin(); it != mp2.end(); ++it)
	{
		ll val = it->first;
		int cnt = it->second;
		if(mp3[val] != cnt)
		{
			ans = val;
			break;
		}
	}
	cout<<ans<<endl;
	return 0;
}