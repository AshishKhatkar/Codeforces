/*
ID: ashish1610
PROG:
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define MOD 1000000007
ll pow_mod(ll a, ll b)
{
    ll res=1;
    while(b)
    {
        if(b&1)
            res=(res*a)%MOD;
        a=(a*a);
        b>>=1;
    }
    return res;
}
string str="qwertyuiop";
string str1="asdfghjkl;";
string str2="zxcvbnm,./";
int main()
{
    ios_base::sync_with_stdio(false);
    char s;
    cin>>s;
    string tmp;
    cin>>tmp;
    string ans="";
    for(int i=0;i<tmp.length();++i)
    {
        if(s=='R')
        {
            if(str.find(tmp[i])!=string::npos)
            {
                ans+=str[str.find(tmp[i])-1];
            }
            else if(str1.find(tmp[i])!=string::npos)
            {
                ans+=str1[str1.find(tmp[i])-1];
            }
            else
            {
                ans+=str2[str2.find(tmp[i])-1];
            }
        }
        else
        {
            if(str.find(tmp[i])!=string::npos)
            {
                ans+=str[str.find(tmp[i])+1];
            }
            else if(str1.find(tmp[i])!=string::npos)
            {
                ans+=str1[str1.find(tmp[i])+1];
            }
            else
            {
                ans+=str2[str2.find(tmp[i])+1];
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
