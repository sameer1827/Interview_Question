// Write a Program to Find a Leap Year or Not

#include <bits/stdc++.h>
using namespace std;
bool check_year(int year)
{
    if (year % 400 == 0)
    {
        return true;
    }
    if (year % 100 == 0)
    {
        return false;
    }
    if (year % 4 == 0)
    {
        return true;
    }
    return false;
}
int main()
{
    int year = 2000;
    if (check_year(year))
    {
        cout << "Leap Year";
    }
    else
    {
        cout << "Not a leap Year";
    }
    return 0;
}