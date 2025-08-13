//generate all binary string of length n without consecutive 1s
#include <iostream>
#include <string>
using namespace std;

void bstring(int n, string s) {
    if (s.length()==n) {
        cout << s << endl;
        return;
    }
    // Include '0' in the string
    bstring(n, s + '0');
    
    // Include '1' in the string only if the last character is not '1'
    if (s.empty() || s.back() != '1') {
        bstring(n, s + '1');
    }
}

int main(){
    
    int n;
    cout << "Enter the length of binary string: ";
    cin >> n;
    bstring(n, "");
    return 0;
}
/*
0000
0001
0010
0100
0101
1000
1001
1010
*/