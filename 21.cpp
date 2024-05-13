//Write a Program to Calculate the Greatest Common Divisor of Two Numbers

#include<bits/stdc++.h>
using namespace std ;


int main()
{
    int a= 54;
    int b = 33;
    int result = min(a,b);
    while(result>0)
    {
        if(a%result==0 && b% result ==0)
        {
            break;
        }
        result--;
       
    }
     cout<<result;
    return 0;
}