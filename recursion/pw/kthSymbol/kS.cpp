#include <iostream>
using namespace std;

int kth(int n, int k)
{
    if (n == 1) return 0;
   

    if (k %2== 0)
    {
        int preAns=  kth(n - 1, k / 2);
        if (preAns == 0) return 1;
        else return 0;
        
        }
       
    
    else
    {
       int preAns= kth(n - 1, k/2+1);
       return preAns; 
        
    }
}

int main()
{
    int n = 4;
    int k = 7;
    cout<<kth(n, k);
    return 0;

}