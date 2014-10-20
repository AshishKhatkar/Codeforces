/*
ID: ashish1610
PROG: B
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define MOD 1000000007
int main()
{
    ll x,y,n;
    cin>>x>>y>>n;
    int tmp=n%6;
    ll ans;
    if(tmp==0)
        ans=x-y;
    else if(tmp==1)
        ans=x;
    else if(tmp==2)
        ans=y;
    else if(tmp==3)
        ans=y-x;
    else if(tmp==4)
        ans=-x;
    else 
        ans=-y;
    while(ans<0)
        ans+=MOD;
    cout<<(ans)%MOD<<endl;
    return 0;
}
