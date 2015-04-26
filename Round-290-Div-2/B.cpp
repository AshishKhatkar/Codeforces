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
bool visited[55][55];
char str[55][55];
int n, m;
bool dfs(int ind, int ind1, int ind_x, int ind_y, int val)
{
	val++;
	if(ind_x < 0 || ind_x >= n || ind_y < 0 || ind_y >= m)
		return false;
	if(ind == ind_x && ind1 == ind_y && val < 3)
		return false;
	if(ind == ind_x && ind1 == ind_y)
		return true;
	if(str[ind][ind1] != str[ind_x][ind_y])
		return false;
	visited[ind_x][ind_y] = true;
	bool res = false;
	if(!visited[ind_x][ind_y - 1])
		res = dfs(ind, ind1, ind_x, ind_y - 1, val);
	if(res)
		return res;
	if(!visited[ind_x][ind_y + 1])
		res = dfs(ind, ind1, ind_x, ind_y + 1, val);
	if(res)
		return res;
	if(!visited[ind_x - 1][ind_y])
		res = dfs(ind, ind1, ind_x - 1, ind_y, val);
	if(res)
		return res;
	if(!visited[ind_x + 1][ind_y])
		res = dfs(ind, ind1, ind_x + 1, ind_y, val);
	return res;
}
bool check_cyclic(int ind, int ind1)
{
	memset(visited, false, sizeof(visited));
	int i, j;
	bool flag = dfs(ind, ind1, ind - 1, ind1, 0);
	flag |= dfs(ind, ind1, ind, ind1 + 1, 0);
	flag |= dfs(ind, ind1, ind + 1, ind1, 0);
	flag |= dfs(ind, ind1, ind, ind1 - 1, 0);
	return flag;
}
int main()
{
	int i, j;
	si(n);
	si(m);
	rep(i, 0, n - 1)
		rep(j, 0, m - 1)
			cin>>str[i][j];
	rep(i, 0, n - 1)
	{
		rep(j, 0, m - 1)
		{
			if(check_cyclic(i, j))
			{
				printf("Yes\n");
				return 0;
			}
		}
	}
	printf("No\n");
	return 0;
}