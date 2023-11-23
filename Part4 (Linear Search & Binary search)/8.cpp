// Square Root Approximation: Implement a function to find the square root of a 
// given positive number using binary search with a specified precision.
//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

float squareRoot(int num, int prec)
{
    int low = 0 , high = num;
    float ans;
    while(low<=high)
    {
        int mid = low + (high - low)/2;
        if(mid * mid == num){
            ans = mid;
            break;
        }
        if(mid*mid < num){
            low = mid + 1;
            ans = mid;;
        } 
        else{
            high = mid - 1;
        }
    }

    float increment =0.1;
    for (int i = 0; i < prec; i++)
    {
        while (ans*ans <= num)
        {
            ans += increment;
        }
        ans-= increment;
        increment = increment / 10;
    }
    return ans;
}
   
int main()
{
    int n;
    cin>>n;
    cout<<"Square Root of "<<n<<" is : "<<squareRoot(n,4);
    return 0;
}