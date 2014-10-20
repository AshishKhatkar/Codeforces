/*ashish1610*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int p[110],n,from,to,amount,m,sum=0;
	cin>>n>>m;
	memset(p,0,sizeof(p));
	for(int i=0;i<m;++i)
	{
		cin>>from>>to>>amount;
		p[from-1]+=amount;
		p[to-1]-=amount;
	}
	for(int i=0;i<n;++i)
	{
		int temp=p[i];
		if(temp<0)
			temp=0;
		sum+=temp;
	}
	cout<<sum<<endl;
	return 0;
}
