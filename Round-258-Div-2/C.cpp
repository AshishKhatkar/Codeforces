/*
ID: ashish1610
PROG: C
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
bool check(ll n, ll x1, ll x2, ll x3, ll k)
{
    if(n%3)
        return false;
    if(x1>=0 && x1<=k && x2>=0 && x2<=k && x3>=0 && x3<=k && x1<=n/3 && x2<=n/3 && x3<=n/3)
        return true;
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,d1,d2,x1,x2,x3;
        cin>>n>>k>>d1>>d2;
        bool found=false;
        /* x1>x2>x3 */
        if((k+2*d1+d2)%3==0)
        {
            x1=(k+2*d1+d2)/3;
            x2=(x1-d1);
            x3=(x2-d2);
            if(check(n,x1,x2,x3,k))
                found=true;
        }
        /* x1>x2<x3 */
        if((k+2*d1-d2)%3==0)
        {
            x1=(k+2*d1-d2)/3;
            x2=(x1-d1);
            x3=(x2+d2);
            if(check(n,x1,x2,x3,k))
                found=true;
        }
        /* x1<x2>x3 */
        if((k-2*d1+d2)%3==0)
        {
            x1=(k-2*d1+d2)/3;
            x2=(x1+d1);
            x3=(x2-d2);
            if(check(n,x1,x2,x3,k))
                found=true;
        }
        /* x1<x2<x3 */
        if((k-2*d1-d2)%3==0)
        {
            x1=(k-2*d1-d2)/3;
            x2=(x1+d1);
            x3=(x2+d2);
            if(check(n,x1,x2,x3,k))
                found=true;
        }
        if(found)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}
