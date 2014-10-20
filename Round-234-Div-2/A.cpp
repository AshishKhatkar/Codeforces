/*	ashish1610	*/
#include<bits/stdc++.h>
using namespace std;
bool a1,a2,a3,a4,a5,a6;
string str;
bool solve(int i, int j)
{
	char ar[i][j];
	int count=0;
	for(int k=0;k<i;++k)
	{
		for(int l=0;l<j;++l)
			ar[k][l]=str[count++];
	}
	bool found=false;
	for(int k=0;k<j;++k)
	{
		int count=0;
		for(int l=0;l<i;++l)
		{
			if(ar[l][k]=='X')
				count++;
		}
		if(count==i)
		{
			found=true;
			break;
		}
	}
	return found;
}
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		cin>>str;
		a1=false,a2=false,a3=false,a4=false,a5=false,a6=false;
		for(int i=0;i<6;++i)
		{
			switch(i)
			{
				case 0:
					a1=solve(1,12);
					break;
				case 1:
					a2=solve(2,6);
					break;
				case 2:
					a3=solve(3,4);
					break;
				case 3:
					a4=solve(4,3);
					break;
				case 4:
					a5=solve(6,2);
					break;
				case 5:	
					a6=solve(12,1);
					break;
			}
		}
		int ans=0;
		if(a1)
			ans++;
		if(a2)
			ans++;
		if(a3)
			ans++;
		if(a4)
			ans++;
		if(a5)
			ans++;
		if(a6)
			ans++;
		cout<<ans<<" ";
		if(a1)
			cout<<1<<"x"<<12<<" ";
		if(a2)
			cout<<2<<"x"<<6<<" ";
		if(a3)
			cout<<3<<"x"<<4<<" ";
		if(a4)
			cout<<4<<"x"<<3<<" ";
		if(a5)
			cout<<6<<"x"<<2<<" ";
		if(a6)
			cout<<12<<"x"<<1<<" ";
		cout<<endl;
		
	}
	return 0;
}
