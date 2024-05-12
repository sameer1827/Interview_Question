//Write a Program to Print Check Whether a Character is an Alphabet or Not

#include<iostream>
using namespace std ;
int main()
{
    char ch = '5';
    if (isalpha(ch))
    {
        cout<< ch <<" is alphabetic character";
    }

    else
    {
        cout<<ch<<" is numeric character";
    }
    return 0;
}