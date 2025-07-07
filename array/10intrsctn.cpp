#include<bits/stdc++.h>
using namespace std;
vector <int> findArrayIntersection(vector <int> a, vector <int> b) {
    int n1 = a.size();
    int n2 = b.size();
    int i=0;
    int j=0;
    vector <int> intersectionArr;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            i++;
        }else if(a[i]>b[j]){
            j++;
        }else{
            if(intersectionArr.size()==0 || intersectionArr.back()!=a[i]){
                intersectionArr.push_back(a[i]);
            }
            i++;
            j++;
        }
    }
    return intersectionArr;
}
int main() {
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {3, 4, 5, 6};

    vector<int> result = findArrayIntersection(a, b);

    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}
 