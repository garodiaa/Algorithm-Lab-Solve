//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void merge(int arr[], int low , int mid, int high){
    int temp[high+1];
    int tindex = 0;

    int left = low;
    int right = mid+1;

    while(left<=mid && right<=high)
    {
        if( arr[left] <= arr[right] )
        {
        temp[tindex] = arr[left];
        left++;
        }
        else
        {
        temp[tindex] = arr[right];
        right++;
        }
        tindex++;
    }

    while(left<=mid)
    {
        temp[tindex] = arr[left];
        left++;
        tindex++;
    }

    while(right<=high)
    {
        temp[tindex] = arr[right];
        right++;
        tindex++;
    }

    for (int i = low; i <=high; i++)
    {
        arr[i] = temp[i-low];
    }
  
}

void mS(int arr[], int low , int high)
{
    if(low>=high)
    return;

    int mid = low + (high-low)/2;
    mS(arr, low, mid);
    mS(arr, mid +1 , high);
    merge(arr,low,mid,high);
}
   
int main()
{
    int arr[] = {1,4,2,11,8,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Given Array : ";
    for(auto it:arr)
    {
        cout<<it<<" ";
    }

    mS(arr,0,n-1);

    cout<<endl<<"Sorted Array : "; 
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
    
    return 0;
}