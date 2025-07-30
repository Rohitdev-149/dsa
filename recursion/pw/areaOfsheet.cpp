#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "number of input: ";
    cin >> n;
    double total_area = 0;
    for (int i = 0; i < n; i++)
    {
        double length, width, count;
        // cout<<"Sheet: "<<i+1<<": Lenght";
        cin >> length;

        cin >> width;
        cin >> count;
        cout << "Sheet:" << i + 1 << "=length:" << length << ",width:" << width << "count:" << count << endl;

        double area = (length / 12) * (width / 12);
        area *= count; // Convert to feet
        total_area += area;
    }
    cout << "Total area of all sheets in square feet: " << total_area << endl;
    return 0;
}