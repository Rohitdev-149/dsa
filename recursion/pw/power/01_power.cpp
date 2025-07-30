// using function
#include <iostream>
#include <string>
using namespace std;

int power(int a, int b)
{
    if (a == 0)
        return 0;
    if (b == 0)  return 1; 
    if (b == 1) return a;
        
    // return a * power(a,b-1);   //tc => o(n) // sc => o(n) for recursion stack
    // return   power(a, b/2) * power(a, b/2); // tc => log(n) // sc => o(log n) for recursion stack 
    // to avoid double call of above return
    int ans = power(a, b/2);  //single call // not work for odd b value
   // to solve this odd division issue we use if-else
   if(b%2==0){
    return ans*ans;
   }
   else
    return a*ans*ans; 

}
int main()
{
    cout << power(3, 3);
}
/*
tc=> o(n)
sc=> o(n) // for recursion stack
*/