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
	string str, str1;
	cin>>str>>str1;
	int cnt[256], cnt1[256];
	memset(cnt, 0, sizeof(cnt));
	memset(cnt1, 0, sizeof(cnt1));
	int i, j, len1 = str.length(), len2 = str1.length();
	rep(i, 0, len1 - 1)
		cnt[str[i]]++;
	rep(i, 0, len2 - 1)
		cnt1[str1[i]]++;
	int ans1 = 0, ans2 = 0;
	rep(i, 0, 255)
	{
		if(cnt[i] >= cnt1[i])
		{
			ans1 += cnt1[i];
			cnt[i] -= cnt1[i];
			cnt1[i] = 0;
		}
		else
		{
			ans1 += cnt[i];
			cnt1[i] -= cnt[i];
			cnt[i] = 0;
		}
	}
	rep(i, 0, 25)
	{
		ans2 += min(cnt[i + 'a'], cnt1[i + 'A']);
		ans2 += min(cnt[i + 'A'], cnt1[i + 'a']);
	}
	cout<<ans1<<" "<<ans2<<endl;
	return 0;
}