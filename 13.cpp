//Write a Program to Find the Sum of the First N Natural Numbers

#include<bits/stdc++.h>
using namespace std ;
int main()
{
     int n;
     cout<<"Enter no till you want to find sum ";
     cin>>n;
      int k=0;
     for(int i=1;i<=n;i++)
     {
         k= k+i;

     }
     cout<<k;
    return 0;
}