/*
ID: ashish1610
PROG: A 
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
int main()
{
    int n,m;
    cin>>n>>m;
    int cnt=0;
    while(n*m>=1)
    {
        n--;
        m--;
        cnt++;
    }
    if(cnt%2)
        cout<<"Akshat\n";
    else
        cout<<"Malvika\n";
    return 0;
}
