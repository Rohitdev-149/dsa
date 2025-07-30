// with dublication character in string =>aba
// step 1: sort the string => aab
#include <iostream>
using namespace std;

void subStr(string str, string ans, int idx, bool flag)
{
    if (idx == str.length())
    {
        cout << ans << endl;
        return;
    }

    // If this is a duplicate character and we're not including it
    if (idx > 0 && str[idx] == str[idx - 1] && !flag)
    {
        // Skip this character to avoid duplicates
        subStr(str, ans, idx + 1, false);
        return;
    }

    // Include the current character
    subStr(str, ans + str[idx], idx + 1, true);

    // Exclude the current character
    subStr(str, ans, idx + 1, false);
}

int main()
{
    string str = "aab";
    string ans = "";

    subStr(str, ans, 0, true);
    return 0;
}
/*
aab
aa 
ab 
a  
b 
""
*/