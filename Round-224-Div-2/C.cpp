By ashish1610, contest: Codeforces Round #224 (Div. 2), problem: (C) Arithmetic Progression, Accepted, #
 /*	ashish1610	*/
#include<bits/stdc++.h>
#define maxn 100003
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int a[n];
	for(int i=0;i<n;++i)
		cin>>a[i];
	sort(a,a+n);
	long long int i,j,k,d;
	if (n<3)
	{
		if(n==1)
			cout<<"-1\n";
		else
		{
			if (n==2)
			{
				if(a[0]==a[1])
					cout<<"1\n"<<a[0]<<endl;
				else
				{
					d=a[1]-a[0];
					k=(a[0]+a[1])/2;
					if((k-a[0])==(a[1]-k))
					{
						cout<<"3\n"<<a[0]-d<<" "<<k<<" "<<a[1]+d<<endl;
                    			}
					else
						cout<<"2\n"<<a[0]-d<<" "<<a[1]+d<<endl;
				}
			}
		}
        	return 0;
	}
	d=a[n-1]-a[0];
	for(i=1;i<n;i++)
		d=min(d,a[i]-a[i-1]);
	j=0;k=0;
	for (i=1;i<n;i++)
	{
		if(a[i]-a[i-1]==d*2)
		{
			j++;
			k=(a[i]+a[i-1])/2;
		}
		if((a[i]-a[i-1]!=d)&&(a[i]-a[i-1]!=(d*2)))
		{
			cout<<"0\n";
			return 0;
		}
	}
	if(d==0)
	{
		cout<<"1\n"<<a[0]<<endl;
		return 0;
	}
	if(j==1)
		cout<<"1\n"<<k<<endl;
	else
	{
		if(j==0)
			cout<<"2\n"<<a[0]-d<<" "<<a[n-1]+d<<endl;
		else
			cout<<"0\n";
	}
	return 0;
}
