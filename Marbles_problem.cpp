#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ll t; cin>>t;
   cout<<" 30 fact is "<<fact(30)<<"\n";
    while(t--){
        ll n,k; cin>>n>>k;
        n-=1;
        k-=1;
        double ans=1;
        for(ll i=0;i<k;i++){
            ans=ans*(n-i);
            ans/=(k-i);
        }
        cout<< (ll)ans <<"\n";
    }
}
