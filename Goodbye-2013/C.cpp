/*ashish1610*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,j;
	cin>>n;
	vector<pair<long long int, long long int> > ar;
	vector<long long int> ans;
	for(i=0;i<n;++i)
	{
		pair<long long int,long long int> temp;
		cin>>temp.first;
		temp.second=i;
		ar.push_back(temp);
	}
	sort(ar.begin(),ar.end());
	ans.resize(n);
	long long int l=0;
	for(i=0;i<n;++i)
	{
		l=max(l+1,ar[i].first);
		ans[ar[i].second]=l;
	}
	for(i=0;i<ans.size();++i)
		cout<<ans[i]<<" ";
	cout<<endl;
	return 0;
}
