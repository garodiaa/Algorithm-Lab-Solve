//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int partition (int arr[] , int low , int high){
    int pivot  = arr[low];
    int i = low;
    int j = high;
    while(i< j){

        while(arr[i]  <= pivot && i<=high-1)
        {
            i++;
        }
        while (arr[j] > pivot && j>=low+1)
        {
            j--;
        }
        if(i<j)swap(arr[i] , arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(int arr[], int low , int high){

    if(low < high)
    {
        int pIndex = partition( arr, low , high);
        qs(arr, low , pIndex-1);
        qs(arr, pIndex+1 , high);
    }
}
   
int main()
{
    int arr[] = { 1,5,3,9,2,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Given Array : ";
    for(int it: arr){
        cout<<it<<" ";
    }

    qs(arr, 0, size-1);

    cout<<endl<<"Sorted Array : "; 
    for(int it: arr){
        cout<<it<<" ";
    }

    return 0;
}