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
	int n;
	cin>>n;
	if(n == 1)
		printf("1\n1\n");
	else if(n == 2)
		printf("1\n1\n");
	else if(n == 3)
		printf("2\n3 1\n");
	else
	{
		int i;
		cout<<n<<endl;
		if(n & 1)
		{
			for(int i = n; i >= 1; i -= 2)
				cout<<i<<" ";
			for(int i = n - 1; i >= 2; i -= 2)
				cout<<i<<" ";
			cout<<endl;
		}
		else
		{
			for(int i = n - 1; i >= 1; i -= 2)
				cout<<i<<" ";
			for(int i = n; i >= 2; i -= 2)
				cout<<i<<" ";
			cout<<endl;
		}
	}
	return 0;
}