// using parameters to calculate the sum of first n natural numbers using recursion
#include <iostream>
#include <string>
using namespace std;

void sm(int i, int sum)
{
    if (i < 1)
    {
        cout << "Sum is: " << sum << endl;
        return;
    }
    sum += i;
    sm(i - 1, sum); 

}
int main()
{
   int i=5;
   sm(i,0);
    return 0;
}