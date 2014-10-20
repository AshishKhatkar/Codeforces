/*
ID: ashish1610
PROG:
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define MOD 1000000007
ll pow_mod(ll a, ll b)
{
    ll res=1;
    while(b)
    {
        if(b&1)
            res=(res*a)%MOD;
        a=(a*a);
        b>>=1;
    }
    return res;
}
struct point
{
    int x;
    int y;
};
int check (int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
{
    point p1,p2,p3,p4;
    p1.x=x1;
    p1.y=y1;
    p2.x=x2;
    p2.y=y2;
    p3.x=x3;
    p3.y=y3;
    p4.x=x4;
    p4.y=y4;
    double dx, dy;
    double dd[6];
    point *pp[4];
    pp[0]=&p1; pp[1]=&p2; pp[2]=&p3; pp[3]=&p4;
    int ii, jj, kk, nn;
    kk = 0;
    for(ii=0; ii<3; ii++) 
    {
        for(jj=ii+1; jj<4; jj++) 
        {
            dx = pp[ii]->x - pp[jj]->x;
            dy = pp[ii]->y - pp[jj]->y;
            dd[kk]= dx*dx + dy*dy;
            if (dd[kk]==0) return 0; 
            if(kk>1) 
            {
                for(nn= 0; nn < kk-1; nn++) 
                {
                    if (!(((2*dd[nn] == dd[kk])||(dd[nn] == dd[kk])||(2*dd[kk] == dd[nn] )))) 
                        return false;
                }
            }
            kk++;
        }
    }
return true;; 
}
 
void rotate(int ang,int a,int b,int &x,int &y)
{
    double angle = (ang)*(3,1452/180); 
    int x1,y1;
    if(ang==90)
    {
        x1=a-y+b;
        y1=x-a+b;
    }
    x=x1;
    y=y1;
}
int main() 
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int tmp[5][5];
    while(n--)
    {
        int ans=INT_MAX;
        for(int j=1;j<=4;j++)
            for(int k=1;k<=4;k++)
                cin>>tmp[j][k];
        for(int i=0;i<4;i++)
        {
            int x1=tmp[1][1];
            int y1=tmp[1][2];
            int a1=tmp[1][3];
            int b1=tmp[1][4];
            for(int u=0;u<i;u++)
                rotate(90,a1,b1,x1,y1);
            for(int j=0;j<4;j++)
            {
                int x2=tmp[2][1];
                int y2=tmp[2][2];
                int a2=tmp[2][3];
                int b2=tmp[2][4];
                for(int u=0;u<j;u++)
                    rotate(90,a2,b2,x2,y2);
                for(int k=0;k<4;k++)
                {
                    int x3=tmp[3][1];
                    int y3=tmp[3][2];
                    int a3=tmp[3][3];
                    int b3=tmp[3][4];
                    for(int u=0;u<k;u++)
                        rotate(90,a3,b3,x3,y3);
                    for(int l=0;l<4;l++)
                    {
                        int x4=tmp[4][1];
                        int y4=tmp[4][2];
                        int a4=tmp[4][3];
                        int b4=tmp[4][4];
                        for(int u=0;u<l;u++)
                            rotate(90,a4,b4,x4,y4);
                        if(check(x1,y1,x2,y2,x3,y3,x4,y4))
                        {
                            if(i+j+k+l<ans)
                                ans=i+j+k+l;
                        }
                    }
                }
            }
        }
        if(ans==INT_MAX)
            cout<<-1<<endl;
        else
            cout<<ans<<endl; 
    }
    return 0;
}
