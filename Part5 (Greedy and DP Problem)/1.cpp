//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int fibo(int n, vector<int> &dp)
{
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];

    dp[n]= fibo(n-1, dp) + fibo(n-2 , dp);
    return dp[n];
}


int main()
{
    int n;
    cin>>n;

    vector<int> dp(n+1,-1);
    cout<<n<<" fibonnaci number is : "<<fibo(n,dp)<<endl;
    return 0;
}