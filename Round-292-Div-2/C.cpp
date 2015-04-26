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
	int n, i, j;
	cin>>n;
	string str, ans = "";
	cin>>str;
	rep(i, 0, n - 1)
	{
		if(str[i] == '0' || str[i] == '1')
			continue;
		if(str[i] == '2')
			ans += '2';
		else if(str[i] == '3')
			ans += '3';
		else if(str[i] == '4')
			ans += "223";
		else if(str[i] == '5')
			ans += '5';
		else if(str[i] == '6')
			ans += "53";
		else if(str[i] == '7')
			ans += '7';
		else if(str[i] == '8')
			ans += "2227";
		else if(str[i] == '9')
			ans += "2337";
	}
	sort(ans.begin(), ans.end());
	reverse(ans.begin(), ans.end());
	cout<<ans<<endl;
	return 0;
}