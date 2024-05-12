// Write a Program to Find the Factorial of a Number Using Loops
#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    while (n > 1)
    {
        fact = fact * n;
        n--;
    }
    return fact;
}
int main()
{
    int n = 5;
    cout << factorial(n);
    return 0;
}