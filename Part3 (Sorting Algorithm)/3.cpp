//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void selection_sort(string arr[], int size)
{
    for(int i=0; i<size-1; i++)
        {
            int min = i;
            for(int j=i+1; j<size; j++)
            {
                if(arr[j] < arr[min])
                    min = j;
            }
            swap(arr[i], arr[min]);
        }   
}


int main()
{
    string arr[] = {"zozo", "jojo" , "hello" , "abba" , "sourav" ,  "garodia"};
    int n = 6;
    cout<<"Given Array of String: ";
    for(string it: arr)
    {
        cout<< it<< " ";
    }

    selection_sort(arr,n);

    cout<<endl<<"Sorted Array of String: ";
    for(string it: arr)
    {
        cout<< it<< " ";
    }
    

    return 0;
}