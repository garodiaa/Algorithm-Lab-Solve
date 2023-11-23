// First Occurrence: Given a sorted array with duplicate elements, 
// find the first occurrence of a specific element using binary search.
//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int firstOccur(int arr[] , int n , int key)
{
    int low = 0 , high = n-1;
    int ans = -1;

    while(low<=high)
    {
        int mid = low + (high - low)/2;

        if(arr[mid] == key)
        {
            ans = mid;
            high = mid - 1;
        }
        else if(key < arr[mid])
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    return ans;
}
int main()
{
    int arr[] = {3,4,11,13,13,13,20,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int key = 13;

    cout<< "first occured at : "<<firstOccur(arr,n,key)<<endl;
    return 0;
}