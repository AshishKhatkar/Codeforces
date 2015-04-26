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
	int v1, v2;
	cin>>v1>>v2;
	int t, d;
	cin>>t>>d;
	if(v1 > v2)
		swap(v1, v2);
	int res = v1 + v2;
	t -= 2;
	int i;
	rrep(i, t, 1)
	{
		if(v1 + d <= v2 + i * d)
		{
			v1 += d;
			res += v1;
		}
		else
		{
			v2 += d;
			res += v2;
		}
	}
	cout<<res<<endl;
	return 0;
}