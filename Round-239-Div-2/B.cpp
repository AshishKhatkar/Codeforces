/*	ashish1610	*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str,str1;
	cin>>str>>str1;
	int ar[26],ar1[26];
	memset(ar,0,sizeof(ar));
	memset(ar1,0,sizeof(ar1));
	for(int i=0;i<str.length();++i)
		ar[str[i]-'a']++;
	for(int i=0;i<str1.length();++i)
		ar1[str1[i]-'a']++;
	long long int ans=0;
	bool found=true;
	for(int i=0;i<26;++i)
	{
		if(ar[i]==0 && ar1[i]>0)
		{		
			found=false;
			break;
		}
		if(ar[i]>ar1[i])
			ans+=ar1[i];
		else
			ans+=ar[i];
	}
	if(found)
		cout<<ans<<endl;
	else
		cout<<-1<<endl;
	return 0;
}
