/*	ashish1610	*/
#include<bits/stdc++.h>
using namespace std;
int main()
{	
	/*	possible co-ordinates for A and B are stored in vector A and B respectively	*/
	vector<pair<int,int> > A,B;
	int a,b;
	cin>>a>>b;
	int xtemp,ytemp;
	xtemp=ytemp=5000;
	bool found=false;
	/*	finding first point	*/
	for(int i=3000;i<=7000;++i)
	{
		for(int j=3000;j<=7000;++j)
		{
			if(i!=xtemp && j!=ytemp)
			{
				int dist=(i-xtemp)*(i-xtemp)+(j-ytemp)*(j-ytemp);
				if(dist==a*a)
					A.push_back(make_pair(i,j));
			}
		}
	}
	/*	finding second point	*/
	for(int i=3000;i<=7000;++i)
	{
		for(int j=3000;j<=7000;++j)
		{
			if(i!=xtemp && j!=ytemp)
			{
				int dist=(i-xtemp)*(i-xtemp)+(j-ytemp)*(j-ytemp);
				if(dist==b*b)
					B.push_back(make_pair(i,j));
			}
		}
	}
	/*	finding third point	*/
	for(int i=0;i<A.size();++i)
	{
		for(int j=0;j<B.size();++j)
		{
			int x2=A[i].first;
			int y2=A[i].second;
			int x3=B[j].first;
			int y3=B[j].second;
			if((x2!=xtemp && y2!=ytemp) && (x3!=xtemp && y3!=ytemp) && (x3!=x2 && y3!=y2) && a*a+b*b==(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3))
			{
				cout<<"YES\n";
				cout<<xtemp<<" "<<ytemp<<endl;
				cout<<x2<<" "<<y2<<endl;
				cout<<x3<<" "<<y3<<endl;
				return 0;
			}
		}
	}
	cout<<"NO\n";
	return 0;
}
