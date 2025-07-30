#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "number of input: ";
    cin >> n;
    double total_length = 0;
    for (int i = 0; i < n; i++)
    {
        double feet, inches;
        // cout<<"Sheet: "<<i+1<<": Lenght";
        cin >> feet;

        cin >> inches;

        cout << "pipe:" << i + 1 << " = feet: " << feet << ", inches: " << inches << endl;

        double length = (feet + (inches / 12.0));

        total_length += length;
    }
    cout << "Total length of all pipe in feet: " << total_length << endl;
    return 0;
}