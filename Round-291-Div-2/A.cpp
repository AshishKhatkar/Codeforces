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
	string str;
	cin>>str;
	string res = "";
	int len = str.length();
	int i;
	if(str[0] == '9')
		res += '9';
	else if(str[0] < '5')
		res += str[0];
	else
		res += (char)(9 - (str[0] - '0') + '0');
	rep(i, 1, len - 1)
	{
		if(str[i] < '5')
			res += str[i];
		else
			res += (char)(9 - (str[i] - '0') + '0');
	}
	cout<<res<<endl;
	return 0;
}