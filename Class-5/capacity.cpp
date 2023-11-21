#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s = "Hello world";
    // cout<<s.size()<<endl;
    // cout<<s.max_size()<<endl;
    // string cb = "HisdfgdfgdfdfsdBhai";
    // cout<<cb.capacity()<<endl;
    // string s = "Hello Mehedi";
    // cout<<s<<endl;
    // s.clear();
    // cout<<s<<endl;
    // cout<<s.size()<<endl;
    // empty
    // string s;
    // if(s.empty() == true) cout<<"Empty"<<endl;
    // else cout<<"Not Empty"<<endl;

    string s;
    cin >> s;
    
    s.resize(20,'H');
    cout << s.size() << endl;
    cout << s << endl;
    return 0;
}