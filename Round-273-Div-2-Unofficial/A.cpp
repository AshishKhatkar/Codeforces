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
    int cnt=0,tmp;
    for(int i=0;i<5;++i)
    {
        cin>>tmp;
        cnt+=tmp;
    }
    if(cnt%5 || cnt==0)
        cout<<"-1\n";
    else
        cout<<cnt/5<<endl;
    return 0;
}
