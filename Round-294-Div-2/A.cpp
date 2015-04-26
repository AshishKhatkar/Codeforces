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
	int white = 0, black = 0;
	int i;
	rep(i, 0, 7)
	{
		cin>>str;
		int len = str.length();
		int j;
		rep(j, 0, len - 1)
		{
			if(str[j] == '.')
				continue;
			if(str[j] >= 'a' && str[j] <= 'z')
			{
				if(str[j] == 'q')
					black += 9;
				else if(str[j] == 'r')
					black += 5;
				else if(str[j] == 'b' || str[j] == 'n')
					black += 3;
				else if(str[j] == 'p')
					black++;
			}
			if(str[j] >= 'A' && str[j] <= 'Z')
			{
				if(str[j] == 'Q')
					white += 9;
				else if(str[j] == 'R')
					white += 5;
				else if(str[j] == 'B' || str[j] == 'N')
					white += 3;
				else if(str[j] == 'P')
					white++;
			}
		}
	}
	if(white == black)
		printf("Draw\n");
	else if(white > black)
		printf("White\n");
	else
		printf("Black\n");
	return 0;
}