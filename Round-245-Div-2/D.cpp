/*  Problem D   */
/*  ashish1610  */
#include <bits/stdc++.h>
using namespace std;
int ar[1005][1005],dp1[1005][1005],dp2[1005][1005],dp3[1005][1005],dp4[1005][1005],n,m;
int solve()
{
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
            dp1[i+1][j+1]=max(dp1[i][j+1],dp1[i+1][j])+ar[i+1][j+1];
    }
    for(int i=n;i>0;--i)
    {
        for(int j=m;j>0;--j)
            dp2[i][j]=max(dp2[i+1][j],dp2[i][j+1])+ar[i][j];
    }
    for(int i=n;i>0;--i)
    {
        for(int j=1;j<=m;++j)
             dp3[i][j]=max(dp3[i+1][j],dp3[i][j-1])+ar[i][j];
    }
    for(int i=1;i<=n;++i)
    {
        for(int j=m;j>0;--j)
            dp4[i][j]=max(dp4[i-1][j],dp4[i][j+1])+ar[i][j];
    }
    int ans=0;
    for(int i=2;i<n;++i)
        for(int j=2;j<m;++j)
            ans=max(ans,max(dp1[i-1][j]+dp2[i+1][j]+dp3[i][j-1]+dp4[i][j+1],dp1[i][j-1]+dp2[i][j+1]+dp3[i+1][j]+dp4[i-1][j]));
    return ans;
}
int main() 
{
    cin>>n>>m;
    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
            cin>>ar[i+1][j+1];
    cout<<solve()<<endl;
    return 0;
}
