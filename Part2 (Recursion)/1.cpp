// Factorial Calculation:
// Write a C function to calculate the factorial of a non-negative integer 'n'. 
// The factorial of 'n' is the product of all positive integers from 1 to 'n'.
//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int fact(int n)
{
    if(n<=1)return 1;

    return n*fact(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<"Factorial of "<<n<<" is : "<<fact(n)<<endl;
    return 0;
}
