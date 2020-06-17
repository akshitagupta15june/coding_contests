#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void counting(int *arr,int a,int b,int m)
{
    int c=0;
    for(int i=0;i<m;i++)
    {
        if(arr[i]>=a && arr[i]<=b)
        {
            c++;
        }
    }
    cout<<c;
}

int main() {
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        counting(arr,a,b,m);
        cout<<endl;
    }
    return 0;
}
