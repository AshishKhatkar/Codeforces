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
    ll r,g,b;
    cin>>r>>g>>b;
    ll maxx=max(r,max(g,b));
    if(maxx/2 > (r+g+b-maxx))
        cout<<(r+g+b-maxx)<<endl;
    else
        cout<<(r+g+b)/3<<endl;
    return 0;
}
