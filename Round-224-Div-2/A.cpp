/*	ashish1610	*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str,str1,lt_str,rt_str;
	cin>>str>>str1;
	lt_str="";
	rt_str="";
	for(int i=0;i<str.length();++i)
	{
		if(str[i]!='|')
			lt_str+=str[i];
		else
			break;
	}
	for(int i=str.length()-1;i>=0;--i)
	{
		if(str[i]!='|')
			rt_str=str[i]+rt_str;
		else
			break;
	}
	if((lt_str.length()+rt_str.length()+str1.length())%2==0)
	{
		if(max(lt_str.length(),rt_str.length())-min(lt_str.length(),rt_str.length())<=str1.length())
		{
			int j=0;
			for(int i=0;i<(lt_str.length()+rt_str.length()+str1.length())/2;++i)
			{
				if(i<lt_str.length())
					cout<<lt_str[i];
				else
					cout<<str1[j++];
			}
			cout<<'|';
			for(int i=0;i<(lt_str.length()+rt_str.length()+str1.length())/2;++i)
			{
				if(i<rt_str.length())
					cout<<rt_str[i];
				else
					cout<<str1[j++];
			}
			cout<<endl;
			return 0;
		}
	}
	cout<<"Impossible\n";
	return 0;
}
