// Sum of Natural Numbers:
// Create a C function to calculate the sum of the 
// first 'n' natural numbers using recursion.
//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int recsum(int n,int sum)
{
    if(n==0)return sum;

    recsum(n-1,sum+n);
}
int main()
{
    int n;
    cin>>n;

    cout<<"sum is : "<<recsum(n,0)<<endl;
    return 0;
}
