/*
ID: ashish1610
PROG:
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define MOD 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    int ar[n];
    int cnt=0;
    for(int i=0;i<n;++i)
        cin>>ar[i];
    sort(ar,ar+n);
    int ans=2*(ar[n-1]-1);
    n-=k;
    while(n>0)
    {
        ans+=2*(ar[n-1]-1);
        n-=k;
    }
    cout<<ans<<endl;
    return 0;
}
