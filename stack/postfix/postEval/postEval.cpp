#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s = "79+4*8/3-";
    stack<int> val;

    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {  // operand
            val.push(s[i] - '0');
        }
        else { // operator
            int v2 = val.top(); val.pop();
            int v1 = val.top(); val.pop();
            if (s[i] == '+') val.push(v1 + v2);
            else if (s[i] == '-') val.push(v1 - v2);
            else if (s[i] == '*') val.push(v1 * v2);
            else if (s[i] == '/') val.push(v1 / v2);
        }
    }

    cout << "Result: " << val.top() << endl;
    return 0;
}
