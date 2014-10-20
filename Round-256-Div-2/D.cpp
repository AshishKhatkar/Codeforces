/*
ID: ashish1610
PROG: D
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
int main() 
{
    ll n,m,k;
    cin>>n>>m>>k;
    if(n>m)
        swap(n,m);  
    ll low=0,high=m*n+1;
    while(high-low>1)
    {
        long long mid=(high+low)/2;
        long long t1=0,t2=0;
        for(long long i=1;i<=n;i++)
        {
            t1+=min(m,(mid-1)/i);
            t2+=min(m,mid/i);
        }
        if(t1==t2)
        {
            if(k<=t1)
                high=mid;
            else 
                low=mid;
            continue;
        }
        t1++;
        if(k<t1)
            high=mid;
        else if(k>t2)
            low=mid;
        else if(t1<=k&&k<=t2)
        {
            cout<<mid<<endl;
            return 0;
        }
    }
    return 0;
}
