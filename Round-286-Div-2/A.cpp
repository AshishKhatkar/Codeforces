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
	string str;
	cin>>str;
	string tmp, tmp1;
	int i, j;
	rep(i, 0, 25)
	{
		rep(j, 0, str.length() - 1)
		{
			tmp = str.substr(0, j);
			tmp += (i + 'a');
			tmp += str.substr(j);
			tmp1 = tmp;
			// cout<<tmp<<endl;
			reverse(tmp1.begin(), tmp1.end());
			if(tmp == tmp1)
			{
				cout<<tmp<<endl;
				return 0;
			}
		}
		tmp = str + (char)(i + 'a');
		tmp1 = tmp;
		reverse(tmp1.begin(), tmp1.end());
		if(tmp == tmp1)
		{
			cout<<tmp<<endl;
			return 0;
		}
	}
	cout<<"NA\n";
	return 0;
}