/*
ID: ashish1610
PROG:
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define MOD 1000000007
bool prime[1000005];
void sieve()
{
    memset(prime,true,sizeof(prime));
    for(int i=2;i<=1000000;++i)
    {
        for(int j=2*i;j<=1000000;j+=i)
            prime[j]=false;
    }
}
int main()
{
    sieve();
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    for(int i=n-1;i>=1;--i)
    {
        if(!prime[i] && !prime[n-i])
        {
            cout<<min(i,n-i)<<" "<<max(i,(n-i))<<endl;
            return 0;
        }
    }
    return 0;
}
