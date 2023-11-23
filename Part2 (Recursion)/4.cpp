// Exponentiation:
// Write a C function to calculate the 
// result of raising a base 'b' to a non-negative integer exponent 'e'.
//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int raisingTo(int base, unsigned int exponent)
{
    if (exponent == 0)
        return 1;
    else
        return base * raisingTo(base, exponent - 1);
}
   
int main()
{

    int b,e;
    cin>>b>>e;
    cout<<b<<" to the power "<<e<<" is : "<<raisingTo(b,e)<<endl;
    
    return 0;
}
