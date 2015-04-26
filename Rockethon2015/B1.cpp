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
	int n, m, i, j, k;
	si(n);
	si(m);
	int ar[n];
	rep(i, 0, n - 1)
		ar[i] = i + 1;
	int val = 0;
	rep(i, 0, n - 1)
	{
		int minx = ar[i];
		rep(j, i, n - 1)
		{
			minx = min(minx, ar[j]);
			val += minx;
		}
	}
	int cnt = 1;
	do
	{
		int val1 = 0;
		rep(i, 0, n - 1)
		{
			int minx1 = ar[i];
			rep(j, i, n - 1)
			{
				minx1 = min(minx1, ar[j]);
				val1 += minx1;
			}
		}
		if(val == val1 && cnt == m)
			break;
		if(val == val1)
		{
			rep(i, 0, n - 1)
				cout<<ar[i]<<" ";
			cout<<endl;
			cnt++;
		}
	}while(next_permutation(ar, ar + n));
	rep(i, 0, n - 1)
		cout<<ar[i]<<" ";
	cout<<endl;
	return 0;
}