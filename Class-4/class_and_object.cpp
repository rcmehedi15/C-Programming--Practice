#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};

int main()
{
    Student a, b;
    // a.roll = 20;
    // a.cgpa = 3.22;
    // char tmp[100] = "Mehedi";
    cin.getline(a.name,100);
    cin >> a.roll >> a.cgpa;
    getchar();
    cin.getline(b.name,100);
    cin >> b.roll >> b.cgpa;

    // char tmp[100] = "Mehedi";
    // strcpy(a.name, tmp);
    cout << a.name << " " << a.roll << " " << a.cgpa << endl;
    cout << b.name << " " << b.roll << " " << b.cgpa << endl;
    return 0;
}