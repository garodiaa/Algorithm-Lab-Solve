//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
bool solveMem(int ind , int target, vector<int> &arr, vector<vector<int>> &dp){
    if(target == 0)return true;
    if(ind == 0)return arr[0]==target;
    if(dp[ind][target]!=-1)
    {
        return dp[ind][target];
    }

    bool notTaken = solveMem(ind-1, target , arr, dp);
    bool taken = false;

    if(arr[ind]<=target)
    {
        taken  = solveMem(ind-1, target - arr[ind], arr, dp);
    }
    return dp[ind][target]= notTaken || taken;
}
int main()
{
    vector<int> arr = {1,2,4,5};
    int n = arr.size();
    int target = 6;
    vector<vector<int>> dp(n,vector<int>(target+1,-1));

    if(solveMem(n-1, target , arr, dp))
    cout<<"Possible"<<endl;
    else
    cout<<"Not Possible"<<endl;
    return 0;
}