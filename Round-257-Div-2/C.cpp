/*
ID: ashish1610
PROG: C
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define MOD 1000000007
int main()
{
    ll n,m,k;
    cin>>n>>m>>k;
    if(k>n+m-2)
        cout<<"-1\n";
    else
    {
        ll ans=0,j;
        for(int i=1;i*i<=n;++i)
        {
            if(n%i==0)
            {
                j=k-(i-1)+1;
                if(j>=1)
                    ans=max(ans,(n/i)*(m/j));
                j=k-((n/i)-1)+1;
                if(j>=1)
                    ans=max(ans,i*(m/j));
            }
        }
        for(int i=1;i*i<=m;++i)
        {
            if(m%i==0)
            {
                j=k-(i-1)+1;
                if(j>=1)
                    ans=max(ans,(m/i)*(n/j));
                j=k-((m/i)-1)+1;
                if(j>=1)
                    ans=max(ans,i*(n/j));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
