//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void bubble_sort(int arr[] , int size)
{
    for (int i = size-1; i > 0; i--)
    { 
        for (int j = 0; j < i; j++)
        {   
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
            }
        }
            
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

    
    bubble_sort(arr,size);


    cout<<endl<<"Sorted Array : ";
    for(auto it : arr){
        cout<<it<<" ";
    }
    return 0;
}