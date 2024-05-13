#include<bits/stdc++.h>
using namespace std ;
 bool palindrome(int n)
 {
    int rev =0;
    int temp =n;
     while(temp!=0)
     {
        rev = (rev*10) + (temp%10);
         temp = temp/10;
     }
      return (rev==n);
 }


int main()
{
    int n = 1232;
    if (palindrome(n))
    {
        cout<<"It is a palindrome number"<<endl;

    }
    else
    {
        cout<<"It is noot a palindromme number"<<endl;
    }
    return 0;
}