#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    // Process each test case
    for (int i = 0; i < t; ++i) {
        // Input the string S and X
        string s, x;
        cin >> s >> x;

        // Replace all occurrences of X with #
        size_t pos = s.find(x);
        while (pos != string::npos) {
            s.replace(pos, x.length(), "#");
            pos = s.find(x, pos + 1);
        }

        // Output the modified string
        cout << s << endl;
    }
    return 0;
}