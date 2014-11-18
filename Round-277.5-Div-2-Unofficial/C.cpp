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
	int m,s;
	cin>>m>>s;
	string ans1="", ans2="";
	if(s>9*m || (s==0 && m!=1))
		cout<<"-1 -1\n";
	else if(s==0)
		cout<<"0 0\n";
	else
	{
		int tmp=s, tmp1=m;
		int val=9;
		string ans="";
		tmp1--;
		tmp--;
		while(tmp1)
		{
			if(tmp>9)
				val=9;
			else
				val=tmp;
			tmp-=val;
			tmp1--;
			ans=(char)(val+'0')+ans;
		}
		if(tmp!=0)
			cout<<(tmp+1)<<ans<<" ";
		else
			cout<<"1"<<ans<<" ";
		tmp=s, tmp1=m;
		val=9;
		while(tmp1)
		{
			if(tmp>9)
				val=9;
			else
				val=tmp;
			tmp-=val;
			tmp1--;
			cout<<val;
		}
		cout<<endl;
	}
	return 0;
}