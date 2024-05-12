// Write a Program to Check the Prime Number
#include <bits/stdc++.h>
using namespace std;
bool Isprime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
}

int main()
{
    int n = 12;
    if (Isprime(n))
    {
        cout << n << " is a prime number." << endl;
    }
    else
    {
        cout << n << " is not a prime number." << endl;
    }
    return 0;
}