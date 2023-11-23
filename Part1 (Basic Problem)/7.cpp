// Write a program that calculates the area and perimeter of a rectangle given its length and width.
//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
   
int main()
{
    double l , w;
    cin>>l>>w;

    cout<<"Area of Rectangle : "<< l*w <<endl;
    cout<<"Perimeter of Rectangle : "<< 2*(l+w) <<endl;

    return 0;
}