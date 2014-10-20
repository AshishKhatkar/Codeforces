/*
ID: ashish1610
PROG:
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define MOD 1000000007
int dp[2][2*100005];
int max_hgt=0,r,g;
int solve()
{
    dp[0][0]=1;
    for(int i=1;i<max_hgt;++i)
    {
        memset(dp[i&1],0,sizeof(dp[i&1]));
        for(int j=0;j<=r;++j)
        {
            int tmp=i*(i-1)/2-j;
            if(tmp+i<=g)
                dp[i&1][j]=(dp[!(i&1)][j]+dp[i&1][j])%MOD;
            if(j+i<=r)
                dp[i&1][j+i]=(dp[!(i&1)][j]+dp[i&1][j+i])%MOD;
        }
    }
    int ans=0;
    for(int i=0;i<=r;++i)
        ans=(ans+dp[(max_hgt-1)&1][i])%MOD;
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin>>r>>g;
    while(max_hgt*(max_hgt+1) <= 2*(r+g))
        max_hgt++;
    cout<<solve()<<endl;
    return 0;
}
