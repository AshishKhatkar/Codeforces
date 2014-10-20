/*	ashish1610	*/
#include<bits/stdc++.h>
using namespace std;
#define mod	1000000007
int main()
{
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;++i)
		cin>>ar[i];
	long long int dp[n],ans=0;
	memset(dp,0,sizeof(dp));
	dp[0]=2;
	ans=2;
	for(int i=1;i<n;++i)
	{
		for(int j=ar[i]-1;j<i;++j)
			dp[i]=(dp[i]+dp[j])%mod;
		dp[i]=(dp[i]+2)%mod;
		ans=(ans+dp[i])%mod;
	}
	cout<<ans<<endl;
	return 0;
}
