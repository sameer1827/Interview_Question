 //Write a Program to Find the Length of the String Without using strlen() Function

#include<iostream>
using namespace std ;
int main()

{
     string str = "Human";
     int length=0;
     for (int i=0; str[i]!='\0';i++)
     {
        length++;
     }
      cout << "The length of the string is: " << length << endl; 
    return 0;
}