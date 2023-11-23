// Maximum Element: Find the maximum element 
// in an array of integers using linear search.
//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
   
int main()
{
    int arr[] = {1,5,6,17,8,3,9,2,11};
    int n = sizeof(arr)/sizeof(arr[0]);

    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if(arr[i] > max)
        max = arr[i];
    }

    cout<<"Max element is: "<<max<<endl;

    return 0;
}