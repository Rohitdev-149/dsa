#include <iostream>
#include <string>
using namespace std;

void fn(string name, int n)
{
    if (n > 5)
        return;
    cout << "Hello, " << name << "!" << endl;
    fn(name, n + 1);
}

int main()
{
    string name = "Rohit";
    fn(name, 1);
    return 0;
}