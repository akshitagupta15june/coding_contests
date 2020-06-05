#include<bits/stdc++.h>

using namespace std;

long long solve(long long a,long long b,long long k);

 // } Driver Code Ends


//User function Template for C++
int reverseDigits(int num) 
{ 
    static int rev_num = 0; 
    static int base_pos = 1; 
    if(num > 0) 
    { 
        reverseDigits(num/10); 
        rev_num += (num%10)*base_pos; 
        base_pos *= 10; 
    } 
    return rev_num; 
} 


long long solve(long long a,long long b,long long k)
{
    int n;
    int coun=0;
    for(int i=a;i<=b;i++)
    {
            n= reverseDigits(i); 
    int sumOdd = 0, sumEven = 0, c = 1; 
  
    while (n != 0) { 
  
        if (c % 2 == 0) 
            sumEven += n % 10; 
        else
            sumOdd += n % 10; 
        n /= 10; 
        c++; 
          } 
  
    int diff=sumEven-sumOdd;
    if(diff<0)
    {
      diff=diff*(-1);  
    }
    
    if(diff%k==0)
    {
        coun++;
    }
        }
        return coun;
    }
    



// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,k;
        cin>>a>>b>>k;
        cout<<solve(a,b,k);
        if(t)cout<<endl;
    }
}  // } Driver Code Ends
