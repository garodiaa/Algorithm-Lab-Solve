// Sum of Array Elements:
// Implement a C function that calculates 
// the sum of elements in an integer array using recursion.
//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int summ(int arr[], int n)
{
    if(n<=0)
    return 0;

    return arr[n-1] + summ(arr,n-1);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"The sum is : "<<summ(arr,n)<<endl;
    
    return 0;
}
