//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int solveMem(vector<int> &arr,int n,int ind ,int prev_index,  vector<vector<int>> &dp)
{
    if(ind==n) return 0;
    if(dp[ind][prev_index+1]!=-1)return dp[ind][prev_index+1];
    int notTake = 0  + solveMem(arr,n,ind+1,prev_index,dp);
    int take = 0;
    if(prev_index == -1 || arr[ind] > arr[prev_index])
    {
        take = 1+ solveMem(arr,n,ind+1,ind,dp);
    }
    return dp[ind][prev_index+1] = max(notTake,take);

}
int main()
{
    vector<int> arr = {10,9,2,3,5,7,101,18};
    int n = arr.size();
    vector<vector<int>> dp(n,vector<int>(n+1,-1));
    int ans = solveMem(arr,n,0,-1,dp);
    cout<<ans<<endl;
    return 0;
}