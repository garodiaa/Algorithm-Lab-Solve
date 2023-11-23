// Implement a program that converts temperature in Celsius to Fahrenheit and vice versa.

//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}
int main()
{
    double temp;
    cout<<"Input Temp in Celsius : ";
    cin>>temp;
    cout<<"Celsius to Fahrenheit : "<<celsiusToFahrenheit(temp)<<endl;
    cout<<"Input Temp in Fahrenheit : ";
    cin>>temp;
    cout<<"Fahrenheit to Celsius : "<<fahrenheitToCelsius(temp)<<endl;
    
    return 0;
}
   

