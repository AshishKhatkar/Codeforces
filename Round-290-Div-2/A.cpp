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
#define sl(a)			cin>>a
#define pi(a)			printf("%d", a)
#define pl(a)			cout<<a
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
	int n, m, i, j;
	si(n);
	si(m);
	char str[n][m];
	rep(i, 0, n - 1)
		rep(j, 0, m - 1)
			str[i][j] = '.';
	rep(i, 0, n - 1)
	{
		rep(j, 0, m - 1)
		{
			if(i & 1)
			{
				if(i % 4 == 1 && j == m - 1)
					str[i][j] = '#';
				else if(i % 4 == 3 && j == 0)
					str[i][j] = '#';
			}
			else
				str[i][j] = '#';
		}
	}
	rep(i, 0, n - 1)
	{
		rep(j, 0, m - 1)
			cout<<str[i][j];
		cout<<endl;
	}
	return 0;
}