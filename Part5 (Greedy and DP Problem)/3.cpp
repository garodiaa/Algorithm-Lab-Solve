//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int solveMem(vector<int> &arr, int ind, int T , vector<vector<long>> &dp)
{
    if(ind == 0) return (T%arr[0]==0);
    if(dp[ind][T]!=-1) return dp[ind][T];

    long notTaken = solveMem(arr, ind -1 , T , dp);

    long taken =0;
    if(arr[ind] <=T)
    {
        taken = solveMem(arr, ind ,T-arr[ind], dp);
    }

    return dp[ind][T] = notTaken + taken;
}
int main()
{
    vector<int> arr= {1,2,3};
    int target = 4;
    int n  = arr.size();
    vector<vector<long>> dp (n, vector<long>(target+1 , -1));
    int ans = solveMem(arr, n-1, target ,dp);

    cout<<"Max ways is : "<<ans<<endl;
    return 0;
}