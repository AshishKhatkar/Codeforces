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
int ar[26];
int main()
{
	int len;
	cin>>len;
	string str;
	cin>>str;
	int i;
	rep(i, 0, len - 1)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			ar[str[i] - 'a']++;
		else
			ar[str[i] - 'A']++;
	}
	rep(i, 0, 25)
	{
		if(ar[i] == 0)
		{
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
	return 0;
}