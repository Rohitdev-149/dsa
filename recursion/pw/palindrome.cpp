#include <iostream>
#include <vector>
using namespace std;
bool palin(string s, int i, int j)
{
    if (i > j)
        return true;
    if (s[i] != s[j])
        return false;
    else
        return palin(s, i + 1, j - 1);
}

int main()
{
    string s = "molm";
    cout << palin(s, 0, s.length() - 1);
}
