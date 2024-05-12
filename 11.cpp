// Write a Program to Remove All Characters From a String Except Alphabets

#include <bits/stdc++.h>
using namespace std;
string remove_non_alpha(string str)
{
    string result = " ";
    for (char c : str)
    {
        if (isalpha(c))
        {
            result += c;
        }
    }
    return result;
}
int main()
{
    string str = "Hundred = 100 ";

    cout << "Alphabets only:" << remove_non_alpha(str);
    return 0;
}