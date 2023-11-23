//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void insertion_sort(float arr[] , int size)
{
    for (int i = 1; i < size; i++)
    {
        float key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]< key)
        {
           arr[j+1] = arr[j];
           j--;
        }
        arr[j+1]=key;
    }

}
int main()
{
 
    float arr[] = {1.25 , 1.14 , 5.43 ,32.06 , 6.77 , 3.55 ,11.01 };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Given Array : ";
    for(float it : arr)
    {
        cout<< it<<" ";
    }

    insertion_sort(arr,size);

    cout<<endl<<"Sorted Array : "; 
    for(float it : arr)
    {
        cout<< it<<" ";
    }
    return 0;
}