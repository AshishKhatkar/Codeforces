/*	ashish1619	*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char ar[n][n];
	int count=0,count1=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>ar[i][j];
			if(ar[i][j]=='#')
			{
				count++;
			}
		}
	}
	if(ar[0][0]=='#' || ar[0][n-1]=='#' || ar[n-1][0]=='#' || ar[n-1][n-1]=='#')
		cout<<"NO\n";
	else if(count%5==0)
	{
		for(int i=1;i<n-1;i++)
		{
			for(int j=1;j<n-1;j++)
			{
				if(ar[i][j]=='#')
				{
					if(ar[i-1][j]=='#'&&ar[i+1][j]=='#'&&ar[i][j-1]=='#'&&ar[i][j+1]=='#')
					{
						ar[i-1][j]='.';
						ar[i+1][j]='.';
						ar[i][j-1]='.';
						ar[i][j+1]='.';
						ar[i][j]='.';
						count1+=5;	
					}	
				}	
			}
		}
		if(count!=count1)
			cout<<"NO\n";
		else
			cout<<"YES\n";	
	}
	else
		cout<<"NO\n";
	return 0;
}
