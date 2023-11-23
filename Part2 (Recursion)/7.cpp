// Count Digits in an Integer:
// Implement a C function that counts the 
// number of digits in a positive integer using recursion
//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int count(int num)
{
    if(num/10 == 0)
    return 1;

    return 1 + count(num/10);
}
   
int main()
{
    int num;
    cin>>num;

    int c = count(num);
    cout<<c<<endl;
    return 0;
}
