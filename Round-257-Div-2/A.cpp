/*
ID: ashish1610
PROG: A
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define MOD 1000000007
struct kid
{
    int to;
    int id;
};
int main()
{
    int n,m;
    cin>>n>>m;
    int mx=-1;
    vector<kid> ar;
    kid tmp;
    for(int i=0;i<n;++i)
    {
        cin>>tmp.to;
        tmp.id=i;
        ar.push_back(tmp);
    }
    while(ar.size()>1)
    {
        ar[0].to-=m;
        if(ar[0].to>0)
        {
            ar.push_back(ar[0]);
        }
        ar.erase(ar.begin());
    }
    cout<<ar[0].id+1<<endl;
    return 0;
}
