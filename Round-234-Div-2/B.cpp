/*	ashish1610	*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin>>n>>m;
	set<int> s;
	char ar[1005][1005];
	bool perfect=true;
	for(int i=0;i<n;++i)
	{
		int ind_g=-1, ind_ss=-1;
		for(int j=0;j<m;++j)
		{
			cin>>ar[i][j];
			if(ar[i][j]=='G')
			{
				ind_g=j;
			}
			if(ar[i][j]=='S')
			{
				ind_ss=j;
			}
		}
		if(ind_g>ind_ss)
			perfect=false;
		else
			s.insert(ind_ss-ind_g);
	}
	if(!perfect)
		cout<<-1<<endl;
	else
		cout<<s.size()<<endl;
	return 0;
}
