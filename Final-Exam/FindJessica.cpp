#include<bits/stdc++.h>
using namespace std;
int main()
{
     // Input the string containing names
    string inputString;
    getline(cin, inputString);

    stringstream ss(inputString);
    string word;

    bool findJessica = false;

    while (ss >> word) {
        if (word == "Jessica") {
            findJessica = true;
            break;  
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