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
	int n, i;
	cin>>n;
	string str, str1;
	cin>>str>>str1;
	int diff = 0, idx = -1;
	rep(i, 0, n - 1)
	{
		if(str[i] != str1[i])
		{
			if(idx == -1)
				idx = i;
			diff++;
		}
	}
	if(diff == 1)
		cout<<"2\n";
	else
	{
		string poss1 = "", poss2 = "";
		rep(i, 0, idx)
		{
			poss1 += str[i];
			poss2 += str1[i];
		}
		rep(i, idx, n - 1)
		{
			poss1 += str1[i];
			poss2 += str[i];
		}
		bool flag1 = true, flag2 = true;
		int cnt = 0, cnt1 = 0;
		idx = 0;
		i = 0;
		while(i < n && cnt < 2)
		{
			if(str[i] != poss1[idx])
			{
				cnt++;
				idx++;
			}
			else
			{
				idx++;
				i++;
			}
		}
		idx = 0;
		i = 0;
		while(i < n && cnt1 < 2)
		{
			if(str1[i] != poss1[idx])
			{
				cnt1++;
				idx++;
			}
			else
			{
				idx++;
				i++;
			}
		}
		if(cnt == 2 || cnt1 == 2)
			flag1 = false;
		cnt = cnt1 = 0;
		idx = 0;
		i = 0;
		while(i < n && cnt < 2)
		{
			if(str[i] != poss2[idx])
			{
				cnt++;
				idx++;
			}
			else
			{
				idx++;
				i++;
			}
		}
		idx = 0;
		i = 0;
		while(i < n && cnt1 < 2)
		{
			if(str1[i] != poss2[idx])
			{
				cnt1++;
				idx++;
			}
			else
			{
				idx++;
				i++;
			}
		}
		if(cnt == 2 || cnt1 == 2)
			flag2 = false;
		if(flag1 == true && flag2 == true)
			cout<<"2\n";
		else if(flag1 || flag2)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
	return 0;
}