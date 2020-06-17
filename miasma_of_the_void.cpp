#include <bits/stdc++.h> 
  
using namespace std; 
int minimumAdjacentDifference(int a[],  
                        int n, int k) 
{ 
   
    int minDiff = INT_MAX; 
  
  
    for (int i = 0; i <= k; i++) { 
          
       
        int maxDiff = INT_MIN; 
        for (int j = 0; j < n - k - 1; j++) { 
            for (int p = i; p <= i + j; p++) { 
                maxDiff = max(maxDiff,  
                     a[p + 1] - a[p]); 
            } 
        } 
       
        minDiff = min(minDiff, maxDiff); 
    } 
    return minDiff; 
} 
  
 
int main() 
{ 
    int n,k;
    cin>>n>>k;
    int Arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>Arr[i];
    }
  
    cout << minimumAdjacentDifference(Arr, n, k); 
    return 0; 
} 
