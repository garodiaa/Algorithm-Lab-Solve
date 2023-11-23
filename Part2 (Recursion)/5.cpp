// Binary Search:
// Implement binary search in C using recursion to find 
// an element in a sorted integer array.
//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int binarySearch(int *arr , int start, int end , int key)
{
    if(start > end)
    return -1;

    int mid = start + (end - start)/2;

    if(arr[mid] == key)
    return mid;


    if(arr[mid] < key )
    {
        return binarySearch(arr,mid+1,end,key);
    }
    else{
        return binarySearch(arr,start,mid-1,key);
    }
    
}
int main()
{
    int arr[] = {1, 3 , 4 , 6 , 7, 9 , 11, 14};
    int size = 8;
    int key;
    cout<<"Element to find : ";
    cin>>key;
    int foundIndex = binarySearch(arr,0,size-1,key);
    if( foundIndex != -1)
    {
        cout<<"Found at index : "<<foundIndex<<endl;
    }
    else{
        cout<<"Not Found "<<endl;
    }
    return 0;
}
