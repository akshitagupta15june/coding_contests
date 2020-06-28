#include <iostream>
#include<algorithm>
using namespace std;
#define int long long 
const int N=1e5+5;
int n,b;
int a[N];
int32_t main(int argc, char **argv)
{
	int t;
    cin>>t;
    int tc=0;
    while(t--)
    {
       tc++;
       cin>>n>>b; 
       for(int i=1;i<=n;i++)
       {
          cin>>a[i]; 
       }
       sort(a+1,a+n+1);
       int ans=0;
       for(int i=1;i<=n;i++)
       {
           if(b>=a[i])
           {
               ans++;
               b-=a[i];
           }
       }
       cout<<"Case #"<<tc<<": "<<ans<<endl;
    }
	return 0;
}
