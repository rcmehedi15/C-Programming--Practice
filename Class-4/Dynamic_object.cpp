#include<bits/stdc++.h>
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
int main()
{
    Student mehedi( 2 ,30,3.6);
    Student* karim=  new Student( 23,6,3.64);
    cout << karim->roll << " " << karim->cls << " " << karim->gpa <<endl;
    return 0;
}