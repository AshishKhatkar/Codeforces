/*  ashish1610  */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,s;
    cin>>n>>s;
    long long int sum=s;
    long long int x,y,pop;
    vector<pair<double, long long int> > v;
    for(int i=0;i<n;++i)
    {
        cin>>x>>y>>pop;
        sum+=pop;
        v.push_back(make_pair(x*x+y*y, pop));
    }
    if(sum<1000000)
        printf("-1\n");
    else if(s>=1000000)
        printf("%.7f\n",0.0);
    else
    {
        sort(v.begin(),v.end());
        int ind;
        for(ind=0;ind<v.size();++ind)
        {
            s+=v[ind].second;
            if(s>=1000000)
                break;
        }
        printf("%.7f\n",sqrt(v[ind].first));
    }
    return 0;
}
