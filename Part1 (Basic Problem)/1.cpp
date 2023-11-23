// Write a program that checks whether a number entered by the user is prime or not. 

//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
   
int isprime(int n)
{
    if(n==1 || n==0) return 1;

    for (int i = 2; i*i <= n; i++)
    {
        if(n%i==0) return 1;    
    }
    
    return 0;
}
   
int main()
{
    int n;
    cin>>n;

    if(isprime(n))
    {
        cout<<"Not Prime"<<endl;
    }
    else
    cout<<"Prime"<<endl;
    return 0;
}