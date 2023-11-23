//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void optimised_bubble_sort(int arr[] , int size)
{
  int swapped = 1;
    for (int i = 1; i < size; i++)
    {
        swapped =0;
        for (int j = 0; j < size-i; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
                swapped = 1;
            }
        }
        if(!swapped)
        return;
    }
}
   
int main()
{
    int arr[] = {1,4,5,32,6,3,11};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<"Given Array : ";
     for(auto it : arr){
        cout<<it<<" ";
    }

    optimised_bubble_sort(arr,size);

    cout<<endl<<"Sorted Array : ";
    for(auto it : arr){
        cout<<it<<" ";
    }
    return 0;
}