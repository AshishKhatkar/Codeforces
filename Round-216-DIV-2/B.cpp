/*
*
*	AshishKhatkar
*	Valera & contest
*
*/

/**************HEADERS*****************/

#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<climits>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<bitset>
#include<stack>
#include<queue>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<functional>
#include<numeric>

using namespace std;

/**************MACROS*****************/

#define PB			push_back
#define MP			make_pair
#define RESET(n,m)		memset(n,m,sizeof(n))
#define	INF			INT_MAX
#define ALL(x)			x.begin(),x.end()
#define vi			vector<int>
#define vl			vector<long long int>
#define pii			pair<int, int>
#define pll			pair<long long int, long long int>
#define I			int
#define LLI			long long int
#define LI			long int
#define F			float
#define D			double
#define SL(n)			strlen(n)
#define max3(a,b,c)		max(a,max(b,c))
#define min3(a,b,c)		min(a,min(b,c))
#define FOR(i,n,m)		for(i=n;i<m;++i)
#define REP(i,n)		FOR(i,0,n)
#define REPI(i,n)		for(i=n;i>=0;--i)
#define W(n)			while(n--)
#define si(n)			scanf("%d",&n)
#define sf(n)			scanf("%f",&n)
#define slf(n)			scanf("%lf",&n);
#define si2(n,m)		scanf("%d %d",&n,&m)
#define si3(n,m,p)		scanf("%d %d %d",&n,&m,&p)
#define sf2(n,m)		scanf("%f %f",&n,&m)
#define sf3(n,m,p)		scanf("%f %f %f",&n,&m)
#define ss(n)			scanf("%s",&n)
#define sc(n)			scanf(" %c",&n)
#define pis(n)			printf("%d ",n)
#define pin(n)			printf("%d\n",n)
#define pin2(n,m)		printf("%d %d\n",n,m)
#define pfs(n)			printf("%f ",n)
#define pfn(n)			printf("%f\n",n)
#define pf6s(n)			printf("%.6f ",n)
#define pf6n(n)			printf("%.6f\n",n)
#define pfn2(n,m)		printf("%f %f\n",n,m)
#define pf6n2(n,m)		printf("%.6f %.6f\n",n,m)
#define plfs(n)			printf("%lf ",n)
#define plfn(n)			printf("%lf\n",n)
#define plf6s(n)		printf("%.6lf ",n)
#define plf6n(n)		printf("%.6lf\n",n)
#define plfn2(n,m)		printf("%lf %lf\n",n,m)
#define plf6n2(n,m)		printf("%.6lf %.6lf\n",n,m)
#define pcs(n)			printf("%c ",n)
#define pcn(n)			printf("%c\n",n)
#define pss(n)			printf("%s ",n)
#define psn(n)			printf("%s\n",n)

int main()
{
	I n,k,l,r,ar[1003],m,x,y,i;
	LLI sk,sall;
	cin>>n>>k>>l>>r>>sall>>sk;
	if(n!=k)
	{
		m=sk%k,x=sk/k,y=(sall-sk)/(n-k);
    		REP(i,n)
		{
        		if (i<k)
			{
        	    		if (i<m) 
				{
					ar[i]=x+1;
				}
        	    		else 
				{
					ar[i]=x;
				}
        		}
			else
			{
        	    		ar[i]=y;
			}
    		}
    		x=(sall-sk)%(n-k);
    		REP(i,x)
		{
			ar[k+i]++;
		}
    		REP(i,n)
		{ 
			cout<<ar[i]<<" ";
		}
	}
	else
	{
		I count_1=sk;
		REP(i,k)
		{
			bool finish=false;
			for(I j=r;j>=l&&!finish;--j)
			{
				if(count_1-j>=0&&count_1-j>=(k-i-1)*l)
				{
					cout<<j<<" ";
					finish=true;
					count_1-=j;
				}
			}
		}
	}
	cout<<endl;
	return 0;
}
