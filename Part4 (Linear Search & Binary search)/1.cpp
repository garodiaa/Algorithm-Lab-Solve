// Array Sum: Given an array of integers, write a program 
// to find the sum of all elements using linear search.
//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
   
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout<<"Sum of the array is: "<<sum<<endl;
    
    return 0;
}