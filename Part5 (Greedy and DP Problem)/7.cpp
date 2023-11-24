//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int coins[] = {1,2,5};
    int amount  = 11;
    int size = 3; 
    int i = size-1;
    int num = 0;
    while(amount >0)
    {
        if(coins[i] > amount)
        {
            i--;
        }
        num += amount / coins[i];
        amount %= coins[i];
        i--;
    }
    cout<<"Minimum coin need in greedy method: "<<num<<endl;
    return 0;
}