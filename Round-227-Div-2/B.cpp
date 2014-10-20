/*	ashish1610	*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	long long int ar[n], ar1[m];	
	for(int i=0;i<n;++i)
		cin>>ar[i];
	for(int i=0;i<m;++i)
		cin>>ar1[i];
	sort(ar,ar+n);
	sort(ar1,ar1+m);
	int ans=0;
	for(int i=0;i<m&&ans<n;++i)
	{
		if(ar1[i]>=ar[ans])
			ans++;
	}
	cout<<n-ans<<endl;
	return 0;
}
