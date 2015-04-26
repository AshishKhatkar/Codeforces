/*
ID: ashish1610
PROG:
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
#define ll				long long int
#define vi				vector<int>
#define vl				vector<ll>
#define	pii				pair<int,int>
#define pil				pair<int, ll>
#define pll				pair<ll, ll>
#define pli 			pair<ll, int>
#define pb(v, a)		v.push_back(a)
#define mp(a, b)		make_pair(a, b)
#define MOD				1000000007
#define rep(i, a, b)	for(i=a; i<=b; ++i)
#define rrep(i, a, b)	for(i=a; i>=b; --i)
#define si(a)			scanf("%d", &a)
#define sl(a)			scanf("%lld", &a)
#define pi(a)			printf("%d", a)
#define pl(a)			printf("%lld", a)
#define pn 				printf("\n")
ll pow_mod(ll a, ll b)
{
	ll res = 1;
	while(b)
	{
		if(b & 1)
			res = (res * a) % MOD;
		a = (a * a) % MOD;
		b >>= 1;
	}
	return res;
}
set<ll> w_set, h_set;
map<ll, ll> w_map, h_map;
set<ll>::iterator it;
map<ll, ll>::iterator it2;
int main() {
	ll w, h, n;
	cin>>w>>h>>n;
	w_set.insert(0LL);
	w_set.insert(w);
	h_set.insert(0LL);
	h_set.insert(h);
 
	w_map[w]=1LL;
	h_map[h]=1LL;
 
	char ch;
	ll ind, i;
	rep(i, 0, n - 1)
	{
		cin>>ch>>ind;
		if (ch == 'V') 
		{
			it = w_set.find(ind);
			if (it != w_set.end()) 
			{
				ll res = (w_map.rbegin())->first * (h_map.rbegin())->first;
				cout<<res<<endl;
			} 
			else 
			{
				it = w_set.lower_bound(ind);
				ll tmp = *it - ind;
				it--;
				ll tmp1 = ind - *it;
				ll tmp2 = tmp + tmp1;
				w_map[tmp2]--;
				if (w_map[tmp2] == 0)
					w_map.erase(tmp2);
				it2 = w_map.find(tmp);
				if (it2 != w_map.end())
					it2->second++;
				else 
					w_map[tmp] = 1LL;
				it2 = w_map.find(tmp1);
				if (it2 != w_map.end())
					it2->second++;
				else
					w_map[tmp1] = 1LL;
				ll res = (w_map.rbegin())->first * (h_map.rbegin())->first;
				cout<<res<<endl;
				w_set.insert(ind);
			}
		} 
		else
		{
			it = h_set.find(ind);
			if (it != h_set.end()) 
			{
				ll res = (w_map.rbegin())->first * (h_map.rbegin())->first;
				cout<<res<<endl;
			} 
			else 
			{
				it = h_set.lower_bound(ind);
				ll tmp = *it - ind;
				it--;
				ll tmp1 = ind - *it;
				ll tmp2 = tmp + tmp1;
				h_map[tmp2]--;
				if (h_map[tmp2] == 0LL) 
					h_map.erase(tmp2);
				it2 = h_map.find(tmp);
				if (it2 != h_map.end())
					it2->second++;
				else
					h_map[tmp] = 1LL;
				it2 = h_map.find(tmp1); 
				if (it2 != h_map.end())
					it2->second++;
				else
					h_map[tmp1] = 1LL;
				ll res = (w_map.rbegin())->first * (h_map.rbegin())->first;
				cout<<res<<endl;
				h_set.insert(ind);
			}
		} 
	}
	return 0;
}