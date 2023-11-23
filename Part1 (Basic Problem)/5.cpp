// Write a program that generates the Fibonacci series up to a given number. 
//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int n;
    cin>>n;

    int fib[n+1];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 0; i < n; i++)
    {
      if(i>1){
      fib[i] = fib[i-1] + fib[i-2];
      cout<<fib[i]<<" ";
      }
      else
      {
        cout<<fib[i]<<" ";
      }
    }
    cout<<endl;
    
    return 0;
}