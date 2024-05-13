// Write a Program to Check Whether a Number is an Armstrong Number or Not

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 153;
    int temp = n;
    int ans = 0;
    while (n > 0)
    {
        int rem = n % 10;
        ans = (ans) + (rem* rem* rem) ;
        n = n / 10;
    }
    if (ans == temp)
    {
        cout << "it is an armstrong number " << endl;
    }
    else
    {
        cout << " It is not an armstrong number" << endl;
    }
    return 0;
}