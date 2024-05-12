// Write a Program to Check Whether a Character is a Vowel or Consonant

#include<iostream>
using namespace std ;
int main()
{
    char ch = 'a';
     
     if(isalpha(ch))
     {
    if(ch == 'a' || ch =='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch== 'o'|| ch=='O'|| ch=='u'|| ch=='U')
    {
        cout<<ch<< " is vowel";
    }
    else
    {
        cout<<ch<<" is consonent";
    }
     }
     else
     {
        cout<<ch<<" not a alphabet";
     }
     

    return 0;
}