#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int wordCount =0;
    while (ss >> word)
    {
        // cout << word << endl;
       wordCount++;
    }
    cout<<wordCount<<endl;
    return 0;
}