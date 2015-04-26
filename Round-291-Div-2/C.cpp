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
vector<string> v;
ll val[600005], hash[600005];
map<ll, string> mp;
void pre_compute()
{
	int i, j;
	val[0] = 1;
	rep(i, 1, 600000)
		val[i] = val[i - 1] * 11LL;
	int sz = v.size();
	rep(i, 0, sz - 1)
	{
		hash[i] = 0;
		int len = v[i].length();
		rep(j, 0, len - 1)
			hash[i] += 1LL * (v[i][j] - 'a' + 1) * val[j];
		mp[hash[i]] = v[i];
	}
	sort(hash, hash + sz);
}
bool check(string str, int ind, int j, string str1)
{
	string tmp = "";
	int i, len = str.length();
	rep(i, 0, len - 1)
	{
		if(i == ind)
			tmp += (char)(j + 'a');
		else
			tmp += str[i];
	}
	if(tmp == str1)
		return true;
	return false;
}
int main()
{
	int n, m, i, j;
	si(n);
	si(m);
	string str;
	rep(i, 0, n - 1)
	{
		cin>>str;
		pb(v, str);
	}
	pre_compute();
	while(m--)
	{
		cin>>str;
		ll hash_val_str = 0;
		int len = str.length();
		rep(i, 0, len - 1)
			hash_val_str += 1LL * (str[i] - 'a' + 1) * val[i];
		bool flag = false;
		rep(i, 0, len - 1)
		{
			ll prev_val = hash_val_str;
			hash_val_str -= 1LL * (str[i] - 'a' + 1) * val[i];
			rep(j, 1, 3)
			{
				if(str[i] - 'a' + 1 == j)
					continue;
				hash_val_str += 1LL * j * val[i];
				if(binary_search(hash, hash + n, hash_val_str))
				{
					if(check(str, i, j - 1, mp[hash_val_str]))
					{
						flag = true;
						break;
					}
				}
				hash_val_str -= 1LL * j * val[i];
			}
			hash_val_str = prev_val;
			if(flag)
				break;
		}
		if(flag)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}