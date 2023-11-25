#include<bits/stdc++.h>
using namespace std;
int main()
{
     // Input the string containing names
    string inputString;
    getline(cin, inputString);

    // Use stringstream to extract words from the input
    stringstream ss(inputString);
    string word;

    // Flag to indicate if "Jessica" is found
    bool findJessica = false;

    // Check each word in the string
    while (ss >> word) {
        if (word == "Jessica") {
            findJessica = true;
            break;  // No need to continue checking once found
        }
    }

    // Output YES or NO accordingly
    if (findJessica) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}