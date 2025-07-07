// best to buy and sell stock in one transaction in a week
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min_price = arr[0];
    int max_profit = 0;
    for(int i = 1; i < n; i++){
      int cost = arr[i] - min_price;
        max_profit = max(max_profit, cost);
        min_price = min(min_price, arr[i]);  //track the minimum price
    }
    cout << "Maximum profit is: " << max_profit << endl;
    return 0;
}