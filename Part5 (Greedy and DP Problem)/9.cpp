//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int solveMem (vector<int> &wt , vector<int> &val, int ind, int W , vector<vector<int>> &dp)
{
    if(ind == 0){
        return (W/wt[0]*val[0]);
    }
    if(dp[ind][W]!= -1)
    {
        return dp[ind][W];
    }

    int exclude = 0 + solveMem(wt , val , ind -1 , W , dp);

    int include = INT_MIN;

    if(wt[ind] <= W)
    include = val[ind] + solveMem(wt , val , ind , W - wt[ind] , dp);

        
    return dp[ind][W] = max(include, exclude);
}
int main()
{
    vector<int> val = {6,10,12};
    vector<int> wt = {2,4,6};
    int capacity = 8;
    int n = wt.size();

    vector<vector<int>> dp (n , vector<int>(capacity+1 , -1));
    int ans = solveMem (wt , val, n-1, capacity , dp);
    cout<<"Maximum Value : "<<ans<<endl;
    return 0;
}