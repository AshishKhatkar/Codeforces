/*
ID: ashish1610
PROG:
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int k,ans=0;
    cin>>str>>k;
    int len=str.length()+k;
    for(int i=0;i<len;++i)
    {
        for(int j=i+1;j<len;j+=2)
        {
            bool chk=true;
            int num=(j-i+1)/2;
            for(int l=i;l<i+num;++l)
            {
                if(l<str.length() && l+num<str.length())
                {
                    if(str[l]!=str[l+num])
                    {
                        chk=false;
                        break;
                    }
                }
            }
            if(chk)
                ans=max(ans,j-i+1);
        }
    }
    cout<<ans<<endl;
    return 0;
}
