/*
ID: ashish1610
PROG:
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
#define ll	long long int
#define MOD	1000000007
int main()
{
	ios_base::sync_with_stdio(false);
	int n, t;
	cin>>n>>t;
	int ar[n + 1];
	for(int i=1; i<n; ++i)
		cin>>ar[i];
	int i = 1;
	bool flag = false;
	while(i < n)
	{
		i += ar[i];
		if(i == t)
		{
			flag = true;
			break;
		}
	}
	if(flag)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}