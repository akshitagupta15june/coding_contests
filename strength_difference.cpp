#include<bits/stdc++.h>
using namespace std;

int diffSum(int n,int m,int arr[]);

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int i = 0;i<n;i++)cin>>arr[i];
        cout<<diffSum(n,m,arr);
        if(t)cout<<endl;
    }
}

 // } Driver Code Ends


//User function Template for C++

int diffSum(int n,int m,int arr[])
{
   
        sort(arr,arr+n);
        int max_sum=0;
        int min_sum=0;
        for(int i=0;i<m;i++)
        {
                min_sum+=arr[i];
            
        }
        int t=n-m;
        for(int i=n-1;i>=t;i--)
        {
                max_sum+=arr[i];
            
        }
        int res=0;
        res=max_sum-min_sum;
        return res;
}

/*#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n, m;
        cin>>n>>m;
        long long int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int max_sum=0;
        int min_sum=0;
        for(int i=0;i<m;i++)
        {
                min_sum+=arr[i];
            
        }
        int t=n-m;
        for(int i=n-1;i>=t;i--)
        {
                max_sum+=arr[i];
            
        }
        int res=0;
        res=max_sum-min_sum;
        cout<<res<<endl;
    }
    return 0;
}
*/
