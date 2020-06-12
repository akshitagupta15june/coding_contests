#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	long long int n;
	int k;
	cin>>n>>k;
	vector<int> a(k);
	for(int i=0;i<n;i++)
	{
		int tmp;
		cin>>tmp;
		a[tmp%k]++;
	}
	int c=0;
	for(int i=0;i<=k/2;i++)
	{
		if(i==0 || (2*i==k))
		{
			if(a[i])
			{
				c+=1;
			}
		}	
			else
			{
				c+=max(a[i],a[k-i]);
			}
		
	}
	cout<<c<<endl;
	return 0;
}
