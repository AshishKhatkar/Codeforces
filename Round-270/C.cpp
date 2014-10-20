/*
ID: ashish1610
PROG:
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define MOD 1000000007
vector<string>a1,a2,a,b;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,tmp;
    cin>>n;
    vector<string>a1(n),a2(n),a(n),b(n);
    for(int i=0;i<n;++i)
        cin>>a1[i]>>a2[i];
    for(int i=0;i<n;++i)
    {
        cin>>tmp;
        a[i]=a1[tmp-1];
        b[i]=a2[tmp-1];
    }
    for(int i=0;i<n;++i)
    {
        a1[i]=min(a[i],b[i]);
        a2[i]=max(a[i],b[i]);
    }
    a[0]=a1[0];
    int i;
    for(i=1;i<n;++i)
    {
        if(a[i-1]<=a1[i])
            a[i]=a1[i];
        else if(a[i-1]<=a2[i])
            a[i]=a2[i];
        else
            break;
    }
    if(i==n)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
