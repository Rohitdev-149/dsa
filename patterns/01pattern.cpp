#include <iostream>
using namespace std;
int main()
{
    // Pattern 1
    /*
12345
12345
12345
12345
12345
    */
    /*
        int n;
        cin>>n;
        int i=1;
        while(i<=n){
            int j=1;
            while(j<=n){
                cout<<j;
                j++;
            }
            cout<<endl;
            i++;
        }*/
    // pattern 2
    /*
    54321
    54321
    54321
    54321
    54321
    */
    /*
     int n;
     cin >> n;
     int i = 1;
     while (i <= n)
     {
         int j = 1;
         while (j <= n)
         {
             cout << n - j + 1;  //imp
             j++;
         }
         cout << endl;
         i++;
     }
     */
    // patern 3
    /*
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
    */
    /*
       int n;
     cin >> n;
     int i = 1;
     int count=1;
     while (i <= n)
     {
         int j = 1;
         while (j <= n)
         {
             cout<<count<<" ";
             count++;
             j++;
         }
         cout << endl;
         i++;
     }
     */
    // pattern 4
    /*
     *
     **
     ***
     ****
     *****
     */
    /*
     int n;
      cin >> n;
      int i = 1;
      while (i <= n)
      {
          int j = 1;
          while (j <= i)
          {
              cout << "*";
              j++;
          }
          cout << endl;
          i++;
      }*/
    // pattern 5
    /*
 1
 22
 333
 4444
 55555
    */
    /*
     int n;
      cin >> n;
      int i = 1;
      while (i <= n)
      {
          int j = 1;
          while (j <= i)
          {
              cout << i;
              j++;
          }
          cout << endl;
          i++;
      }*/
    // pattern 6
    /*
 1
 2 3
 4 5 6
    */
    /*
      int n;
      cin >> n;
      int count = 1;  //imp
      int i = 1;
      while (i <= n)
      {
          int j = 1;
          while (j <= i)
          {
              cout << count <<" ";
              count++;
              j++;
          }
          cout << endl;
          i++;

      }*/
    // pattern 7
    /*
    1
    2 3
    4 5 6
    7 8 9 10
    */
    /*
        int n;
        cin >> n;
        int i = 1;
        int val=i;    //imp
        while (i <= n)
        {
            int j = 1;
            while (j <= i)
            {
                cout <<val<<" ";
                val++;
                j++;
            }
            cout << endl;
            i++;
        }*/
    // pattern 8
    /*
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
    */
    /*
     int n;
     cin >> n;
     int i = 1;
     while (i <= n)
     {
         int j = 1;
         while (j <= i)
         {
             cout << i-j+1<<" ";  /imp
             j++;
         }
         cout << endl;
         i++;
     }*/
    // pattern 9
    /*
 AAAAA
 BBBBB
 CCCCC
 DDDDD
 EEEEE
    */
    /*
     int n;
      cin >> n;
      int i = 1;
      while (i <= n)
      {
          int j = 1;
          while (j <=n)
          {
              char ch='A'+i-1;  //imp
              cout <<ch;
              j++;
          }
          cout << endl;
          i++;
      }*/
    // pattern 10
    /*
    ABCDE
    ABCDE
    ABCDE
    ABCDE
    ABCDE
    */
    /*
        int n;
        cin >> n;
        int i = 1;
        while (i <= n)
        {
            int j = 1;
            while (j <=n)
            {
                char ch='A'+j-1;  //imp
                cout <<ch;
                j++;
            }
            cout << endl;
            i++;
        }
        */
    // pattern 11
    /*
ABCDE
FGHIJ
KLMNO
PQRST
UVWXY
    */
    // int n;
    // cin >> n;
    // int i = 1;
    // char ch = 'A';
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {

    //         cout << ch;
    //         ch++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

//pattern 12
/*
ABCDE
BCDEF
CDEFG
DEFGH
EFGHI
*/
/*
     int n;
    cin >> n;
    int i = 1;
    while (i<=n)
    {
       int j=1;
       while (j<=n)
       {
        char ch='A'+i+j-2; //imp
        cout<<ch;
        j++;
       }
       cout<<endl;
       i++;
    }
    
}
*/