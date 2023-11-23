// Unsorted Array Search: Given an unsorted array, write a program 
// to find a specific element using linear search.
//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
   
int main()
{
    int arr[] = {1,5,6,17,8,3,9,2,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int flag = 0;
    int element = 8;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == element)
        {
            flag = 1;
            cout<<"Element " <<element<<" found"<<endl;
        }
    }
    if(flag == 0)
    cout<<"Element not found"<<endl;

    return 0;
}