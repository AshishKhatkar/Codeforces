/*
ID: ashish1610
PROG:
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
#define ll	long long int
#define MOD	1000000007
ll dp[505][505];
int left_2[505];
ll solve(ll i, ll j, ll md)
{
	if(dp[i][j]!=-1)
		return dp[i][j];
	if(i==0 && j==0)
	{
		dp[i][j]=1;
		return 1;
	}
	dp[i][j]=0;
	if(i>=2)
	{
		ll tmp=(i*(i-1))/2;
		dp[i][j]+=solve(i-2,j,md)*tmp;
		dp[i][j]%=md;
	}
	if(j>=2)
	{
		ll tmp=(j*(j-1))/2;
		dp[i][j]+=solve(i+2,j-2,md)*tmp;
		dp[i][j]%=md;
	}
	if(i>=1 && j>=1)
	{
		ll tmp=i*j;
		dp[i][j]+=solve(i,j-1,md)*tmp;
		dp[i][j]%=md;
	}
	return dp[i][j];
}
int main()
{
	ios_base::sync_with_stdio(false);
	for(int i=0;i<505;++i)
		left_2[i]=2;
	int n,m,md;
	cin>>n>>m>>md;
	string str;
	for(int i=0;i<m;++i)
	{
		cin>>str;
		for(int j=0;j<n;++j)
		{
			if(str[j]=='1')
				left_2[j]--;
			if(left_2[j]<0)
			{
				cout<<"0\n";
				return 0;
			}
		}
	}
	ll cnt1=0, cnt2=0;
	for(int i=0;i<n;++i)
	{
		if(left_2[i]==1)
			cnt1++;
		else if(left_2[i]==2)
			cnt2++;
	}
	if(cnt1+cnt2==0)
	{
		cout<<"1\n";
		return 0;
	}
	memset(dp,-1,sizeof(dp));
	cout<<solve(cnt1,cnt2,md)<<endl;
	return 0;
}