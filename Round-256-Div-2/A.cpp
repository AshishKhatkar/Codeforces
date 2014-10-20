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
    int a1,a2,a3,b1,b2,b3,n;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
    int total_cups=a1+a2+a3;
    int total_medals=b1+b2+b3;
    int cup=total_cups/5;
    if(total_cups%5!=0)
        cup++;
    int medal=total_medals/10;
    if(total_medals%10!=0)
        medal++;
    if(cup+medal<=n)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
