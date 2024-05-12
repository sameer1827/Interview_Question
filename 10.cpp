//  Write a Program to Remove the Vowels from a String
#include <iostream>
using namespace std;
int main()
{
    string str = "My name is Sameer Kumar Singh";
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != 'a' && str[i] != 'A' && str[i] != 'e' && str[i] != 'E' && str[i] != 'i' && str[i] != 'I' && str[i] != 'o' && str[i] != 'O' && str[i] != 'u' && str[i] != 'U')
        {
            str[j++] = str[i];
        }
    }
    while (j < str.size())
    {
        str[j] = '\0';
        j++;
    }
    cout << "After removiong all the vowels we get " << str << endl;

    return 0;
}