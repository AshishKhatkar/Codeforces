/*	ashish1610	*/
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
	if(b<=a && a%b==0)
		return b;
	if(a<b)
		return gcd(b,a);
	else
		return gcd(b,a%b);
}
int main()
{
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;++i)
		cin>>ar[i];
	int gcd1;
	gcd1=gcd(ar[0],ar[1]);
	for(int i=2;i<n;++i)
		gcd1=gcd(gcd1,ar[i]);
	cout<<gcd1*n<<endl;
	return 0;
}
