// using function
#include <iostream>
#include <string>
using namespace std;

int sm( int n)
{
    if (n==0)
    {
       
        return 0;
    }
   return sm(n-1) + n; // This will not work as expected, it will not print the sum

}
int main()
{
   int n = 5;
   cout << "Sum is: " << sm(n) << endl; // This will print the sum
//    return sm(i); // This will return the sum
}