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
int ans[100005];
void pre_compute(int k)
{
    memset(ans,0,sizeof(ans));
    for(int i=0;i<k;++i)
        ans[i]=1;
    for(int i=k;i<=100000;++i)
        ans[i]=(ans[i-k]+ans[i-1])%MOD;
    for(int i=2;i<=100000;++i)
        ans[i]=(ans[i]+ans[i-1])%MOD;
    ans[0]=0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int t,k;
    cin>>t>>k;
    pre_compute(k);
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<(ans[b]-ans[a-1]+MOD)%MOD<<endl;
    }
    return 0;
}
