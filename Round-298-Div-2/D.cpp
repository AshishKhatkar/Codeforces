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
stack<int>cnt[200005];
vector<int>res;
int main()
{
	int n, tmp;
	cin>>n;
	int i;
	rep(i, 1, n)
	{
		cin>>tmp;
		cnt[tmp].push(i);
	}
	int ind = 0, val = 0;
	while(ind >= 0 && val != n)
	{
		if((int)cnt[ind].size() != 0)
		{
			res.push_back(cnt[ind].top());
			cnt[ind].pop();
			ind++;
			val++;
		}
		else
			ind -= 3;
	}
	if(val != n)
		cout<<"Impossible\n";
	else
	{
		cout<<"Possible\n";
		rep(i, 0, n - 1)
			cout<<res[i]<<" ";
		cout<<endl;
	}
	return 0;
}