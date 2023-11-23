// Element Frequency: Count the frequency of a 
// specific element in an array using linear search.
//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
   
int main()
{
    int arr[] = {1,8,5,6,17,8,3,9,2,8,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int element = 8;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == element)
        {
            count++;
        }
    }
    cout<<"Frequency of Element " <<element<<" is: "<<count<<endl;
    
    return 0;
}