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
ll pow2[55];
int main()
{
	int i;
	pow2[0] = 1;
	rep(i, 1, 54)
		pow2[i] = 2 * pow2[i - 1];
	ll h, n;
	cin>>h>>n;
	ll val = n + pow2[h] - 1, ans = 0, cur = 1, ind = 1;
	bool dir = true;
	while(cur != val)
	{
		ll x = cur, y = val;
		while(2 * x + 1 < y)
			y/=2;
    	if(2 * x + 1 == y)
		{
			if(dir)
				ans += 2 * pow2[h - ind];
			else
			{
				ans++;
				dir = true;
			}
			cur = 2 * cur + 1;
		}
		else
		{
			if(!dir)
				ans += 2 * pow2[h - ind];
			else
			{
				ans++;
				dir = false;
			}
			cur *= 2;
		}
		ind++;
	}
	cout<<ans<<endl;
	return 0;
}