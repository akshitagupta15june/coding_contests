#include<iostream>
using namespace std;
void count(int *arr,int n)
{
	int c=1;
	int c_max=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]>=c_max)
		{
			c++;
			c_max=arr[i];
		}
	}
	cout<<c;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		count(arr,n);
		cout<<endl;
	}
	return 0;
}
