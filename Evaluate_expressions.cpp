#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
using namespace std;
int main() {
    long long int t;
    long long int sum=0;
    cin>>t;
    while(t--)
    {
        
        long long int n;
        long long int power=0;
        cin>>n;
        long long int d=n%10;
        n=n/10;
        power=pow(n,d);
        sum+=power;
    }
    cout<<sum<<endl;
}
