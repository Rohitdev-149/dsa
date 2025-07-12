#include<iostream>
#include<sstream>
using namespace std;
int main() {
    string s = "Hello World from C++"; // Example string with multiple words
    stringstream ss(s); // Create a stringstream object with the string

    // Read words from the stringstream
    string word;
    while (ss >> word) {
        cout << word << endl; // Output each word
    }

 
}