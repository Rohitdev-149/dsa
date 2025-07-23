#include <iostream>
#include <string>
using namespace std;

bool palin(int i, string &s)
{
    int n = s.size();

    // Base case: if we've checked more than half the string, it's a palindrome
    if (i >= n / 2)
        return true;

    // If characters don't match, it's not a palindrome
    if (s[i] != s[n - i - 1])
        return false;

    // Recursive call to check next pair of characters
    return palin(i + 1, s);
}

int main()
{
    string s = "MADAN"; // Changed to "MADAM" which is a palindrome

    if (palin(0, s))
        cout << "Palindrome" << endl;
    else
        cout << "Not a palindrome" << endl;
    return 0;
}