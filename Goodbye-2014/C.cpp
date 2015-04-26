/*
ID: ashish1610
PROG:
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
#define ll	long long int
#define MOD	1000000007
int ar[505], ar1[1005];
bool visited[1005];
int main()
{
	ios_base::sync_with_stdio(false);
	int n, m, tmp;
	cin>>n>>m;
	for(int i=0; i<n; ++i)
		cin>>ar[i];
	for(int i=0; i<m; ++i)
		cin>>ar1[i];
	int ans = 0;
	for(int i=m-1; i>=0; --i)
	{
		memset(visited, false, sizeof(visited));
		for(int j=i-1; j>=0; --j)
		{
			if(ar1[i] == ar1[j])
				break;
			if(!visited[ar1[j]])
			{
				visited[ar1[j]] = true;
				ans += ar[ar1[j] - 1];
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}