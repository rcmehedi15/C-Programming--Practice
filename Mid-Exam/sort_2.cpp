#include <bits/stdc++.h>
using namespace std;

int main() {
    string line;
    while (getline(cin, line)) {
        line.erase(remove_if(line.begin(), line.end(), ::isspace), line.end());
        sort(line.begin(), line.end());
        cout << line << endl;
    }
    return 0;
}
