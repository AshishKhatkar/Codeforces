/*	ashish1610	*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int ans=10000000000000;
	long long int ar[n];
	for(int i=0;i<n;++i)
		cin>>ar[i];
	long long int temp,temp1;
	for(int i=0;i<n;++i)
	{
		temp=0;
		for(int j=0;j<ar[i];++j)
		{
			cin>>temp1;
			temp=temp+temp1*5+15;
		}
		ans=min(ans,temp);
	}
	cout<<ans<<endl;
	return 0;
}
