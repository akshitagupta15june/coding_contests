#include<bits/stdc++.h>
#define con continue
#define pb push_back
#define fi first
#define se second
#define fr front()
#define one 1.0
#define inf 1000000000000000000
#define ret return
#define all(vl) vl.begin(),vl.end()
#define sor sort 
#define cl clear
#define m_p make_pair
#define ct centre 
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
typedef map<ll,ll>::iterator itll;
typedef long double ld;
typedef map<ll,ll> mapll;
typedef map<string,ll> mapstl;
int main()
{
	ll n;
	cin>>n;
	vector<vector<ll>> vl;
	for(int i=0;i<n;i++)
	{
		vector<ll> v;
		for(int j=0;j<n;j++)
		{
			ll a;
			cin>>a;
			v.pb(a);
		}
		vl.pb(v);
	}
	for(int t=0;t<3;t++)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				ll sx,sy;
				sx = j;
				sy = n-1-i;
				vl[sx][sy] = (vl[i][j] == 1 || vl[sx][sy] == 1);
			}
		}
	}
	for(int i=0;i<vl.size();i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<vl[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
