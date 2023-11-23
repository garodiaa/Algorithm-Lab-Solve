// Peak Element: Find a peak element in an array. An element is 
// considered a peak if it's greater than or equal to its neighbors.
//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int findPeak(int arr[], int n)
{
    if(n==1)return arr[0];
    if(arr[0] > arr[1])return arr[0];
    if(arr[n-1] > arr[n-2]) return arr[n-1];

    int low = 1 , high = n-2;

    while(low<=high)
    {
        int mid = low + (high - low)/2;
        
        if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1])
        {
            return arr[mid];
        }
        if(arr[mid] > arr[mid-1])
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
}
int main()
{
    int arr[] = { 1, 5, 8, 40, 20, 9, 7, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"Peak element is : "<<findPeak(arr,n);
    return 0;
}