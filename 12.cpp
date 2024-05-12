// Write a Program to Remove Spaces From a String
#include <bits/stdc++.h>
using namespace std;
string remove_spaces(string str)
{
    string result = " ";
    for (char c : str)
    {
        if (c != ' ')
        {
            result += c;
        }
    }
    return result;
}
int main()
{
    string str = "I am a good boy";
    cout << remove_spaces(str);
    return 0;
}
