// Input: v = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]
// three pointer method (dutch FLAG problem)

#include <iostream>
#include <vector>
using namespace std;

    void sortColors(vector<int>& v) {
    int n=v.size();
    int h=n-1;
    int l =0;
    int m =0;
    while(m<=h){
        if(v[m]==0){
            swap(v[l],v[m]);
            l++;
            m++;
        }
        else if(v[m]==1){
            m++;
        }
        else{
            swap(v[m],v[h]);
            h--;
        }
    }
   
    }
main(){
     vector<int> v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
   
    cout << "the elements are :" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
   sortColors(v);
    cout << "the sorted elements are :" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}