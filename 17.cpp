#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int reversed = 0;
    int temp = n;

    while (temp != 0) {
        reversed = (reversed * 10) + (temp % 10);
        temp = temp / 10;
    }

    return (reversed == n);
}

int main() {
    int n = 212;

    if (isPalindrome(n)) {
        cout << "It is a palindrome number" << endl;
    } else {
        cout << "It is not a palindrome number" << endl;
    }

    return 0;
}
