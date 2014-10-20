/*
ID: ashish1610
PROG: A
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define MOD 1000000007
double pow_md(double x, int n)
{
    double res=1;
    while(n>0)
    {
        if(n&1)
            res=res*x;
        x*=x;
        n/=2;
    }
    return res;
}
int main()
{
    ll m,n;
    cin>>m>>n;
    double dp[100005],tmp;
    dp[1]=1;
    for(int i=2;i<=m;++i)
    {
        tmp=pow_md((double)(i-1)/(double)(i),n);
        dp[i]=(double)i+tmp*(dp[i-1]-i);
    }
    printf("%.12lf\n",dp[m]);
    return 0;
}
