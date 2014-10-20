/*	ashish1610	*/
#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	int ar[n];	
	for(int i=0;i<n;++i)
		cin>>ar[i];
	sort(ar,ar+n);
	vector<int> v[101];
	for(int i=0;i<n;++i)
		for(int j=0;j<101;++j)
			if(v[j].size()<=ar[i])
			{
				v[j].push_back(ar[i]);
				break;
			}
	int ans=0;
	for(int i=0;i<101;++i)
	{
		if(v[i].size()==0)
			break;
		ans++;
	}
	cout<<ans<<endl;
	return 0;
}
