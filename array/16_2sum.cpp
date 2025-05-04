// find the 2 element in the array which give target value
#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm> // for sort
using namespace std;

string read(int n, vector<int> book, int target)
{
    // unordered_map<int, int> map;
    // for (int i = 0; i < n; i++)
    // {
    //     int a = book[i];
    //     int more = target - a; 
    //     if (map.find(more) != map.end())
    //     {
    //         // return "yes";     -> to check if the pair exists
    //          return to_string(map[more]) + " " + to_string(i); //-> to return the indices
    //     }
    //     map[a] = i;
    // }
    // return "no";


// optimal solution
    // Sort the array
    sort(book.begin(), book.end());
    int left = 0, right = n - 1;
    while (left < right)
    {
        int sum = book[left] + book[right];
        if (sum == target)
        {
            return "yes";
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return "no";
}

int main()
{
    
    vector<int> book = {9, 4, 0, 3, 20, 10,0, 3, 5};
    int n = book.size();
    int target=30;
 
    cout << read(n, book, target) << endl;
    return 0;
}
