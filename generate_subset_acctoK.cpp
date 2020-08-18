#include<iostream>
using namespace std; 
void combination(int arr[], int n, int r, int index, int data[], int i) 
{ 
	if (index == r) { 
		for (int j = 0; j < r; j++) 
        {
            cout<<data[j]<<" ";
        }
		cout<<endl;
		return; 
	} 

	if (i >= n) 
    {
       return; 
    }
		

	data[index] = arr[i]; 
	combination(arr, n, r, index + 1, data, i + 1); 

	combination(arr, n, r, index, data, i + 1); 
} 


int main() 
{ 
	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
	int k;
    cin>>k;
    int data[k];
	combination(arr, n, k, 0, data, 0); 
	return 0; 
} 
