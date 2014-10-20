/*  ashish1610  */
#include<bits/stdc++.h>
using namespace std;
long long int pre[1000001];
void pre_compute()
{
    pre[0]=0;
    for(int i=1;i<=1000000;++i)
        pre[i]=pre[i-1]^i;
}
int main()
{
    pre_compute();
    long long int n;
    cin>>n;
    long long int p[n+1];
    long long int ans=0;
    for(int i=1;i<=n;++i)
    {
        cin>>p[i];
        ans^=p[i];
    }
    for(int i=2;i<=n;++i)
    {
        long long int q=n/i,rem=n%i;
        if(q%2)
        {
            ans^=pre[i-1];
            ans^=pre[rem];
        }
        else
            ans^=pre[rem];
    }
    cout<<ans<<endl;
    return 0;
}
