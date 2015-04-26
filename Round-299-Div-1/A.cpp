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
bool check(ll l, ll r, ll a, ll b, ll t, ll m)
{
	ll i, sum = (a + (l - 1) * b + a + (r - 1) * b) * (r - l + 1) / 2;
	if(sum <= m * t)
		return true;
	return false;
}
int main()
{
	ll a, b, n;
	cin>>a>>b>>n;
	while(n--)
	{
		ll l, t, m;
		cin>>l>>t>>m;
		if(t < a + (l - 1) * b)
			cout<<"-1\n";
		else
		{
			ll ans;
			ll low = l, high = 1000000LL;
			while(low <= high)
			{
				ll mid = (low + high) >> 1;
				if(a + (mid - 1) * b <= t && check(l, mid, a, b, t, m))
				{
					ans = mid;
					low = mid + 1;
				}
				else
					high = mid - 1;
			}
			cout<<ans<<endl;
		}
	}
	return 0;
}