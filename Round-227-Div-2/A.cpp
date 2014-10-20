/*	ashish1610	*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int h1,m1,h2,m2;
	scanf("%d:%d",&h1,&m1);
	scanf("%d:%d",&h2,&m2);
	int t1=h1*60+m1;
	int t2=h2*60+m2;
	int ans=t1-t2;
	if(ans>=0)
		printf("%.2d:%.2d\n",ans/60,ans%60);
	else
	{
		printf("%.2d:%.2d\n",(ans+1440)/60,(ans+1440)%60);
	}
	return 0;
}
