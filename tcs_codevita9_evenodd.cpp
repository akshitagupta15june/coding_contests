#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	long long int a;
    long long int b;
    cin>>a>>b;
    long long int k;
    cin>>k;
    long long int evensum=0;
    long long int oddsum=0;
    for(int i=a;i<=b;i++)
    {
        if(i%2==0)
        {
            evensum++;
        }
        else
        {
            oddsum++;
        }
    }
    long long int curr_even=0;
    long long int curr_odd=0;
    long long int prev_even=evensum;
    long long int prev_odd=oddsum;
    if(k==1)
    {
        cout<<evensum<<endl;
    }
    else
        {
    for(int i=2;i<=k;++i) 
    {
        curr_even = prev_odd * oddsum + prev_even * evensum; 
        curr_odd = prev_odd * evensum + prev_even * oddsum;
        prev_odd = curr_odd;
        prev_even = curr_even;
    }
    cout<<curr_even;
    }
    
    return 0;
}
