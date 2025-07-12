#include<iostream>
#include<sstream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string s = "Rohit is a bad boy. But he is good player"; // Example string with multiple words
    stringstream ss(s); // Create a stringstream object with the string

    // Read words from the stringstream
    string word;
    vector<string> v;
    while (ss >> word) {
        // Output each word
        v.push_back(word);
    }
    // print vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
cout<<endl;
sort(v.begin(), v.end()); // sort the vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
    
    // count most occur word
    string mostOccurWord = "";
    int maxCount = 0;
    for (int i = 0; i < v.size(); i++) {
        int count = 1;
        for (int j = i + 1; j < v.size(); j++) {
            if (v[i] == v[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostOccurWord = v[i];
        }
    }
    cout << "Most Occur Word: " << mostOccurWord << " Count: " << maxCount << endl;

    return 0;
 
}