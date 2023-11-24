//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int solveMem (vector<int> &weight , vector<int> &value, int ind, int capacity , vector<vector<int>> &dp)
{
    if(ind == 0){
        if(weight[0] <= capacity) return value[0];
        else return 0;
    }
    if(dp[ind][capacity]!= -1)
    {
        return dp[ind][capacity];
    }

    int include = 0;
    if(weight[ind] <= capacity)
    include = value[ind] + solveMem(weight , value , ind -1 , capacity - weight[ind] , dp);

        
    int exclude = 0 + solveMem(weight , value , ind -1 , capacity , dp);
    dp[ind][capacity] = max(include, exclude);
    return dp[ind][capacity];
}
   
int main()
{
    vector<int> weight = {10,20,30};
    vector<int> value = {60,100,120};
    int capacity = 50;
    int n = weight.size();

    vector<vector<int>> dp (n , vector<int>(capacity+1 , -1));
    int ans = solveMem (weight , value, n-1, capacity , dp);
    cout<<ans<<endl;
    return 0;
}