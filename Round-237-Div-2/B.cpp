/*	ashish1610	*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a,d;
	int n;
	cin>>a>>d>>n;
	double s=(double)d/a;
	long long t=s;
	double ans=0.0;
	double q=s-t;
	double r=s;
	int w=2;
	for(int i=1;i<=n;++i)
	{
        	ans=q*a;
        	if(t%4==0)
        	{
        	    	printf("%lf %lf\n",ans,0.0);
        	}
        	else if(t%4==1)
        	{
        	    	printf("%lf %lf\n",a,ans);
        	}
       		else if(t%4==2)
        	{
            		ans=a-ans;
            		printf("%lf %lf\n",ans,a);
        	}
        	else if(t%4==3)
        	{
            		ans=a-ans;
            		printf("%lf %lf\n",0.0,ans);
        	}
        	s=r*w;
        	t=s;
        	q=s-t;
        	w++;
    	}
    	return 0;
}
