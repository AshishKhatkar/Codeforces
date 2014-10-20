/*	ashish1610	*/
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int m;
	scanf("%d",&m);
	long long int ar[m];
	pair<int,pair<int,int> > query[m];
	long long int count = 0;
  	for(int i=0;i<m;++i)
	{
    		int x,y,z;
    		scanf("%d",&x);
    		if (x == 1)
    		{
      			scanf("%d",&y);
      			z = -1;
      			count++;
      			ar[i] = count;
    		}
    		else
    		{
      			scanf("%d%d",&y,&z);
      			count += y*z;
      			ar[i] = count;
    		}
    		query[i] = make_pair(x,make_pair(y,z));
  	}
  	int n;
  	scanf("%d",&n);
  	for(int i=0;i<n;++i)
  	{
  		long long int x;
    		cin >> x;
    		while (1)
    		{
      			int low = 0, high = m-1;
      			while (low < high)
      			{
        			int mid = (low+high)/2;
        			if (x > ar[mid])
          				low = mid+1;
        			else
          				high = mid;
      			}
      			if (query[low].first == 1)
      			{
        			printf("%d",query[low].second.first);
        			break;
      			}
      			else
      			{
        			long long int z = 0;
        			if (low != 0)
          				z = ar[low-1];
        			x -= z;
        			x %= (long long int)query[low].second.first;
        			if (x == 0)
          				x = query[low].second.first;
      			}
    		}
    		if (i < n-1)
      			printf(" ");
    		else
      			printf("\n");
  	}
	return 0;
}
