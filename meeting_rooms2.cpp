#include<iostream>
#include<algorithm>
#include<climits>
#include <set>
using namespace std;
int main() {

	long long int n;
	long long int secmax=0;
	cin >> n;
	pair<long long int, long long int>p[n];
	for (int i = 0; i < n; i++) {
		cin >> p[i].first ;
		cin >> p[i].second;
	}
	for(int i=0;i<n;i++)
	{
		secmax=max(secmax,p[i].second);
	}
	
    long long int prefix[secmax+10]={0};
	cout<<"prefix after prefix[secmax+10]={0}"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<prefix[i]<<" ";
	}
    for(int i=0;i<n;i++)
    {
        prefix[p[i].first]++;
        prefix[p[i].second+1]--;
    }
	cout<<endl;
	cout<<"prefix after diff array"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<prefix[i]<<" ";
	}
	cout<<endl;
    long long int maxi=0;
    long long int sum=prefix[0];
    for(int i=1;i<n;i++)
    {
        sum+=prefix[i];
        prefix[i]=sum;
    }
	cout<<"prefix after prefix sum"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<prefix[i]<<" ";
	}
	cout<<endl;
    for(int i=0;i<n;i++)
    {
        maxi=max(prefix[i],maxi);
    }
	cout<<maxi<<endl;
    

}
