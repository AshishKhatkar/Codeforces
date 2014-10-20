/*	ashish1610	*/
#include<bits/stdc++.h>
using namespace std;
int compare(int a,int b)
{
    return a>b;
}
int main()
{
	int n,ar[100010];
	vector <int> lr_ans,ll_ans;
	cin>>n;
	for(int i=0;i<n;++i) 
		cin>>ar[i];
	sort(ar,ar+n,compare);
	int i=0;
	while(ar[i]==ar[i+1]&&i<n-1)
		++i;
	int count=0;
	int l_lt=-5001,r_lt=-5001,mid=ar[i];
	++i;
	for(;i<n;++i)
	{
		if(ar[i]!=r_lt)
		{
			lr_ans.push_back(ar[i]);
			r_lt=ar[i]; 
			count++;
		}
		else if(ar[i]!=l_lt)
		{
			ll_ans.push_back(ar[i]);
			l_lt=ar[i];
			count++;
		}
	} 
	cout<<count+1<<endl;
	sort(ll_ans.begin(),ll_ans.end());
	for(i=0; i<ll_ans.size(); i++)
		printf("%d ",ll_ans[i]);
	cout<<mid;
	for(i=0; i<lr_ans.size(); i++)
		printf(" %d",lr_ans[i]);
	cout<<endl; 
	return 0;
}
