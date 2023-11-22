#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream fullString(s);
    string OneWord;
    int wordCount =0;
    while (fullString >> OneWord)
    {
        // cout << word << endl;
       wordCount++;
    }
    cout<<wordCount<<endl;
    return 0;
}