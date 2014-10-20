/*  ashish1610  */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int sit=0, stand=0;
    for(int i=0;i<str.length();++i)
    {
        if(str[i]=='x')
            sit++;
        else
            stand++;
    }
    if(sit==stand)
        cout<<0<<endl<<str<<endl;
    else
    {
        int sitx,standx;
        sitx=abs(n/2-sit);
        standx=abs(n/2-stand);
        int ans=min(sitx,standx);
        cout<<ans<<endl;
        if(sit>stand)
        {
            int temp=0;
            for(int i=0;i<str.length();++i)
            {
                if(str[i]=='x' && temp!=ans)
                {
                    temp++;
                    cout<<'X';
                }
                else
                    cout<<str[i];
            }
            cout<<endl;
        }
        else
        {
            int temp=0;
            for(int i=0;i<str.length();++i)
            {
                if(str[i]=='X' && temp!=ans)
                {
                    temp++;
                    cout<<'x';
                }
                else
                    cout<<str[i];
            }
            cout<<endl;
        }
    }
    return 0;
}
