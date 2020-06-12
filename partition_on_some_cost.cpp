#include<bits/stdc++.h>
#include<iostream>
using namespace std;
const int maxn=6005;
int n,k,top,cnt;
int l[maxn],r[maxn],ord[maxn],st[maxn],val[maxn];
long long ans1,ans2;
bool cmp(int a,int b)
{
	return r[a]-l[a]>r[b]-l[b];
}
bool cmp_rl(int a,int b)
{
	if(r[a]!=r[b])
	{
		return r[a]<r[b];
	}
	return l[a]>l[b];
}
int main () {
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>l[i]>>r[i];
		ord[i]=i;
	}
	sort(ord+1,ord+1+n,cmp);
	for(int i=1;i<=k-1;i++)
	{
		ans1+=r[ord[i]]-l[ord[i]];
	}
	sort(ord+1,ord+1+n,cmp_rl);
	for(int i=1;i<=n;i++)
	{
		if(top&&l[st[top]]>=l[ord[i]])
		{
		val[++cnt]=r[ord[i]]-l[ord[i]];
		}
		else
		{
			st[++top]=ord[i];
		}
	}
	ans2=r[st[1]]-l[st[top]];
	for(int i=1;i<top;i++)
	{
		val[++cnt]=r[st[i+1]]-l[st[i]];
	}
	sort(val+1,val+1+cnt);
	reverse(val+1,val+1+cnt);
	for(int i=1;i<=k-1;i++)
	{
		ans2+=val[i];
	}
		cout<<max(ans1,ans2);
	
		return 0;
}
