// Write a Program to Find the Greatest of the Three Numbers.

#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int num_1 = 100, num_2 = 200, num_3 = 90;
    int greatest = max(num_1,max(num_2, num_3) );
    cout<<"Greatest number is : "<<greatest<<endl;
    return 0;
 }