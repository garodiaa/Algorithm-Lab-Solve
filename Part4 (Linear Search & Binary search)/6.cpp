// Sorted Array Search: Given a sorted array of integers, 
// write a program to find a specific element using binary search.
//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int binarySearch(int arr[], int n,int element)
{
    int low = 0 , high = n-1;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(arr[mid] == element)
        return mid;

        if(arr[mid] < element)
        low = mid+1;

        else
        high = mid-1;
    }
    return -1;
}

int main()
{
    int arr[] = { 1,3,5,7,9,11,13};
    int n = sizeof(arr)/sizeof(arr[0]);
    int element = 11;
    int index = binarySearch(arr,n,element);
    if(index == -1)
        cout<<"Not found"<<endl;
    else
        cout<<"Found at index : "<<index<<endl;

    return 0;
}