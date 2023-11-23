// Fibonacci Series:
// Create a C function to find the nth number in the Fibonacci series. 
// The Fibonacci series starts with 0 and 1, and each subsequent number is the sum of the two preceding ones
//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int fibo(int n)
{
    if(n<=1) return n;
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<"The "<<n<<"th Fibonacci Number is : "<<fibo(n)<<endl;
    
    return 0;
}