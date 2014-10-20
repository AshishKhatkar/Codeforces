/*
ID: ashish1610
PROG: A
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
int main()
{
    ll n;
    scanf("%I64d",&n);
    ll ar[n];
    for(int i=0;i<n;++i)
        scanf("%I64d",&ar[i]);
    sort(ar,ar+n);
    ll ans=0;
    ans+=n*(ar[n-1]);
    ll cnt=n;
    for(int i=n-2;i>=0;--i)
    {
        ans+=ar[i]*cnt;
        cnt--;
    }
    printf("%I64d\n",ans);
    return 0;
}
