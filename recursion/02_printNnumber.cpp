#include <iostream>
#include <string>
using namespace std;

void fn(int i, int n)
{
    if (i > n)
        return;
    // cout<< i << endl;
    fn(i+1, n);
    cout<< i << endl; // for reverse the number
}

int main()
{
   int n=5;
    fn(1, n);
    return 0;
}
// print in reverse order
// #include <iostream>
// #include <string>
// using namespace std;

// void fn(int i, int n)
// {
//     if (i < 1)
//         return;
//     cout << i << endl;
//     fn(i-1, n);
// }

// int main()
// {
//    int n=5;
//     fn(n, n);
//     return 0;
// }
/*
5
4
3
2
1
*/