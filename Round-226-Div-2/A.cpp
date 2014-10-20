/*	ashish1610	*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c,ans=0;
	cin>>n>>c;
	int ar[n];
	for(int i=0;i<n;++i)
		cin>>ar[i];
	int x=ar[0];
	for(int i=1;i<n;++i)
	{
		if(x-ar[i]-c>ans)
			ans=x-ar[i]-c;
		x=ar[i];
	}
	cout<<ans<<endl;
	return 0;
}
