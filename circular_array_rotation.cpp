#include<bits/stdc++.h>

using namespace std;


int main() {
   long long int k,n,q;
    cin>>n>>k>>q;
    k=k%n;
   long long int i,ar[n],x,s=0;
    for(i=0;i<n;i++)
        cin>>ar[i];
    for(i=1;i<=q;i++)
    {
          cin>>x;
     s=n-k+x;
     if(s<n)
         cout<<ar[s]<<endl;
     else if(s>=n)
     { s=s-n;
         cout<<ar[s]<<endl;
    }}

    return 0;
}
