/*
ID: ashish1610
PROG:
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
#define ll	long long int
#define MOD	1000000007
int b[105], g[105];
int main()
{
	ios_base::sync_with_stdio(false);
	int n,m;
	cin>>n;
	for(int i=0;i<n;++i)
		cin>>b[i];
	sort(b,b+n);
	cin>>m;
	map<int,int> mp;
	for(int i=0;i<m;++i)
	{
		cin>>g[i];
		mp[g[i]]++;
	}
	sort(g,g+m);
	int ans=0;
	for(int i=0,j=0;i<n && j<m;)
	{
		if(abs(b[i]-g[j])<=1)
		{
			ans++;
			i++;
			j++;
		}
		else
		{
			if(b[i]>g[j])
				j++;
			else
				i++;
		}
	}
	cout<<ans<<endl;
	return 0;
}