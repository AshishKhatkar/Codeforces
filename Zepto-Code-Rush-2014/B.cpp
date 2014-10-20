/*
ID: ashish1610
PROG: Om Nom and Spiders
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,ans[4005];
    memset(ans,0,sizeof(ans));
    cin>>n>>m>>k;
    char tmp;
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=m;++j)
        {
            cin>>tmp;
            if(tmp=='.')
                continue;
            else if(tmp=='U')
            {
                if(i%2)
                    ans[j]++;
            }
            else if(tmp=='D')
                continue;
            else if(tmp=='L')
            {
                if(j-i+1<0)
                    continue;
                else
                    ans[j-i+1]++;
            }
            else if(tmp=='R')
                ans[i+j-1]++;
        }
    }
    for(int i=1;i<=m;++i)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
