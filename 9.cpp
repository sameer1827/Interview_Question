// Write a Program to Count the Number of Vowels

#include <iostream>
using namespace std;
int main()
{
    string str = "My name is Sameer Kumar Singh";
    int vowels = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowels++;
        }
    }
    cout << "No of vowels in the string is " << vowels << endl;
    return 0;
}