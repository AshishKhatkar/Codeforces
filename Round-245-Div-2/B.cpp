/*  Problem B   */
/*  ashish1610  */
#include <bits/stdc++.h>
using namespace std;
int ans=1000,x,n,k,temp;
void compute(vector<int> a, int flag)
{
    ans = min(ans,(int)a.size());
    for(int i=0;i<a.size();++i)
    {
        int j;
        for(j=i+1;j<a.size();++j)
            if(a[j]!=a[i])
                break;
        if(j-i>2||((a[i]==x)&&(j-i==2)&&(flag==1)))
        {
            vector<int> b;
            for(int k=0;k<a.size();++k)
                if(k<i||k>=j)
                    b.push_back(a[k]);
            compute(b,flag+1);
        }
    }
}

int main() 
{
    cin>>n>>k>>x;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    compute(a,1);
    cout<<n-ans<<endl;
    return 0;
}
