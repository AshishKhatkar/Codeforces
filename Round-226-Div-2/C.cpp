/*	ashish1610	*/
#include<bits/stdc++.h>
using namespace std;
long long int inp[10000005];
long long int prime[10000005];
long long int ans[10000005];
void solve()
{
	prime[1]=1;
	long long int i,j;
	for(i=2;i<10000005;i++)
	{
		if(prime[i]==0)
		{
			ans[i]+=inp[i];
			for(j=i+i;j<10000005;j+=i)
			{
				if(inp[j]>0)
					ans[i]+=inp[j];
				prime[j]=1;
			}
		}
	}
	for(i=1;i<10000005;i++)
		ans[i]+=ans[i-1];
}
int main()
{
	long long int n;
	cin>>n;
	for(long long int i=0;i<n;++i)
	{
		long long int temp;
		cin>>temp;
		inp[temp]++;
	}
	solve();
	long long int m;
	cin>>m;
	long long int maxx=10000001;
	for(long long int i=0;i<m;++i)
	{
		long long int x,y;
		cin>>x>>y;
		x=min(x,maxx);
		y=min(y,maxx);
		cout<<ans[y]-ans[x-1]<<endl;
	}
	return 0;
}
