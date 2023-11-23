// Reverse a String:
// Write a C function to reverse a given string using recursion.
//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
void rev(string &str, int l , int r)
{
    if(l>=r)return;

    swap(str[l],str[r]);
    rev(str,l+1,r-1);
}
int main()
{
    string str;
    getline(cin,str);
    int n = str.length();
    rev(str,0,n-1);

    for(auto it : str)
    {
        cout<<it;
    }

    return 0;
}
