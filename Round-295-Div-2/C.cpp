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
int main()
{
	int n;
	si(n);
	string str;
	cin>>str;
	int len = str.length();
	int i, cnt[4];
	memset(cnt, 0, sizeof(cnt));
	rep(i, 0, len - 1)
	{
		if(str[i] == 'A')
			cnt[0]++;
		else if(str[i] == 'G')
			cnt[1]++;
		else if(str[i] == 'C')
			cnt[2]++;
		else
			cnt[3]++;
	}
	sort(cnt, cnt + 4);
	int maxx = cnt[3];
	int val = 0;
	rep(i, 0, 3)
		if(cnt[i] == maxx)
			val++;
	ll ans = pow_mod(val * 1LL, n * 1LL);
	cout<<ans<<endl;
	return 0;
}