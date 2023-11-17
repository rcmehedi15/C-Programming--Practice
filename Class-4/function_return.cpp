#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
Student* fun()
{
    Student* mehedi =  new Student(3, 10, 3.65);
   
    return mehedi;
}
int main()
{
    Student* answer = fun();
    // cout << answer.roll <<" "<< answer.cls <<" "<< answer.gpa << endl;
    cout << answer->roll << " " << answer->cls << " " << answer->gpa <<endl;
    delete answer;
    cout << answer->roll << " " << answer->cls << " " << answer->gpa <<endl;

    return 0;
}