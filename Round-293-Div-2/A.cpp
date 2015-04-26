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
char str[105], str1[105];
int main()
{
	cin>>str>>str1;
	int i, j, len = strlen(str);
	str[len - 1]++;
	while(str[len - 1] > 'z')
	{
		str[len - 1] -= 26;
		str[len - 2]++;
		--len;
	}
	bool flag = true;
	rep(i, 0, strlen(str) - 1)
	{
		if(str[i] != str1[i])
		{
			flag = false;
			break;
		}
	}
	if(flag)
		printf("No such string\n");
	else
		cout<<str<<endl;
	return 0;
}