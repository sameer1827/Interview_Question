//Write a cpp program to find fib series till n;

#include<bits/stdc++.h>
using namespace std ;
 int fib(int n)
 {
    int first =0, second =1, ans;
    for(int i=0;i<=n;i++)
    {
        if(i<=1)
        {
            ans =i;
        }
         else{
            ans = first+second;
            first= second;
            second=ans;
         }
          cout<<ans<<"  ";
    }
     
 }
int main()
{
     int n=10;
     cout<<fib(n);
    return 0;
}
