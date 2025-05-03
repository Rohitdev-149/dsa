#include <iostream>

using namespace std;
int factorial(int x)
{

    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f *= i;
    }
    return f;
}
int ncr(int n, int r)
{

    //     int a=factorial(n);
    //    int b=factorial(r);
    //    int c=factorial(n-r);
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int n;
    cout << "Enter Number ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        // for (int j = 0; j <= n-i; j++){ //for space
        
        //     cout<< " ";
        // }

        for (int j = 0; j <= i; j++) // for number
        {
            cout << ncr(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}
/*
Enter Number 5
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1

      1 
     1 1
    1 2 1
   1 3 3 1
  1 4 6 4 1 
 1 5 10 10 5 1
*/