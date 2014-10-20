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
    ll n,m;
    cin>>n>>m;
    ll maxx=((n-m+1)*(n-m))/2;
    ll tmp=n/m;
    ll minx=m*(tmp*(tmp-1))/2+(n%m)*tmp;
    cout<<minx<<" "<<maxx<<endl;
    return 0;
}
