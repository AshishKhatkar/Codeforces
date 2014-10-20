/*ashish1610*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;++i)
		cin>>ar[i];
	string ans="";
	while(ar[0]!=0)
	{
		if(ar[0]==1)
			ans+='P';
		else
			ans+="PRL";
		ar[0]--;
	}
	ans+='R';
	for(int i=1;i<n-1;++i)
	{
		while(ar[i]!=0)
		{
			if(ar[i]==1)
				ans+='P';
			else
				ans+="PLR";
			ar[i]--;
		}
		ans+='R';	
	}
	while(ar[n-1]!=0)
	{
		if(ar[n-1]==1)
			ans+='P';
		else
			ans+="PLR";
		ar[n-1]--;
	}
	cout<<ans<<endl;	
	return 0;
}
