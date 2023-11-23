// Create a program to check if a given string is a palindrome.
//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int checkPal(string str)
{
    int l = 0;
    int h = str.length() - 1;
    while(h > l) {
        if (str[l++] != str[h--])
        return 1;
    }
    return 0;
}
   
int main()
{
    string str;
    cin>>str;

    if(checkPal(str))
    cout<<"Not Palindrome"<<endl;
    else{
        cout<<"Palindrome"<<endl;
    }
    return 0;
}