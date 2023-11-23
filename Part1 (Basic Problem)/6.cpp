// Develop a program that counts the number of words in a given sentence.
//SouravGarodia 221-15-5048
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
   
int main()
{
    string sentence;
    getline(cin,sentence);
    int words = 0;
    int length = sentence.length();

    for (int i = 0; i < length; i++)
    {
        if(sentence[i] == ' ')
        words++;
    }
    cout<<"Total Words: "<<++words<<endl;
    
    return 0;
}