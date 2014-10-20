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
int ans[1000005];
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;++i)
        cin>>ar[i];
    int ind=1;
    for(int i=0;i<n;++i)
    {
        while(ar[i]--)
            ans[ind++]=i+1;
    }
    int m;
    cin>>m;
    while(m--)
    {
        int q;
        cin>>q;
        cout<<ans[q]<<endl;
    }
    return 0;
}
