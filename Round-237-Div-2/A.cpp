/*	ashish1610	*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char ar[n][n];
	for(int i=0;i<n;++i)
		cin>>ar[i];
	bool diagonal=true,rest=true;
	bool left_diagonal=true,right_diagonal=true;
	char ch=ar[0][0];
	bool on_diagonal[n][n];
	memset(on_diagonal,false,sizeof(on_diagonal));
	on_diagonal[0][0]=true;
	for(int i=1;i<n;++i)
	{
		on_diagonal[i][i]=true;
		if(ar[i][i]!=ch)
			left_diagonal=false;
	}
	for(int i=0;i<n;++i)
	{
		on_diagonal[i][n-1-i]=true;
		if(ar[i][n-1-i]!=ch)
			right_diagonal=false;
	}
	if(right_diagonal && left_diagonal)
	{
		char ch1=ar[0][1];
		if(ch==ch1)
		{
			cout<<"NO"<<endl;
			exit(0);
		}
		for(int i=0;i<n;++i)
		{
			for(int j=0;j<n;++j)
			{
				if(!on_diagonal[i][j] && ar[i][j]!=ch1)
					rest=false;
			}
		}
		if(rest)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	else
		cout<<"NO"<<endl;
	return 0;
}
