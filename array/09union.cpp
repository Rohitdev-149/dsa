#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b) {
    int n1 = a.size();
    int n2 = b.size();
    set<int> st;
    for (int i = 0; i < n1; i++) {  
        st.insert(a[i]);
    }
    for (int i = 0; i < n2; i++) {
        st.insert(b[i]);
    }
    vector<int> ans;
    for (auto it : st) {
        ans.push_back(it);                                                                                                                       
    }
    return ans;
}
                                                                                                                                                                                                                                                            
int main() {
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {3, 4, 5, 6};

    vector<int> result = sortedArray(a, b);

    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}
