//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int solveMem(vector<int> &coins , int amount , vector<int> &dp)
{
    if(amount == 0) return 0;
    if(amount<0) return INT_MAX;

    if(dp[amount]!= -1) return dp[amount];

    int mini = INT_MAX;

    for (int i = 0; i < coins.size(); i++)
    {
        int ans = solveMem(coins, amount - coins[i] , dp);
        if(ans != INT_MAX)
        mini = min(mini, ans + 1);
    }

    dp[amount] = mini;

    return mini;

}   
int main()
{
    vector<int> coins = {1,5,10};
    int amount  = 12;
    int n = coins.size();
    vector<int> dp(amount+1,-1);

    int ans = solveMem(coins , amount , dp);

    if(ans == INT_MAX)
    {
        cout<<"not possible"<<endl;
    }
    else
    cout<<ans<<endl;

    return 0;
}