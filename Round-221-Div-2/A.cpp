/*ashish1610*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	cin>>str;
	long long int left=0,right=0;
	long index=-1;
	for(long i=0;i<str.length();++i)
	{
		if(str[i]=='^')
		{
			index=i;
		}
	}
	for(long i=0;i<index;++i)
	{
		if(str[i]>='1' && str[i]<='9')
			left+=((index-i)*(int)(str[i]-'0'));
	}
	for(long i=index+1;i<str.length();++i)
	{
		if(str[i]>='1' && str[i]<='9')
			right+=((i-index)*(int)(str[i]-'0'));
	}
	if(left==right)
		cout<<"balance\n";
	else if(left>right)
		cout<<"left\n";
	else
		cout<<"right\n";
	return 0;
}
