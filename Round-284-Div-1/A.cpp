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
	pair<ll, ll> p1, p2;
	cin>>p1.first>>p1.second;
	cin>>p2.first>>p2.second;
	int n, ans = 0;
	cin>>n;
	while(n--)
	{
		ll a, b, c;
		cin>>a>>b>>c;
		ll tmp1 = a * p1.first + b * p1.second + c;
		ll tmp2 = a * p2.first + b * p2.second + c;
		if((tmp1 < 0 && tmp2 > 0) || (tmp1 > 0 && tmp2 < 0))
			ans++;
	}
	cout<<ans<<endl;
	return 0;
}