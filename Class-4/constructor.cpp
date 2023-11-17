#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    // varibale declare 
    int roll;
    int cls;
    double gpa;
    // constructor 
    Student(int roll, int cls,double gpa)
    {
        // (*this) er poriborte -> arrow sing 
        // value pass
       this->roll = roll;
       this->cls = cls;
       this->gpa = gpa;
    }
};
int main()
{
    // student banano
    Student mehedi(25,9,3.58);
    Student rahat(28,9,3.58);
    // print korar jonno 
    cout << mehedi.roll << " " << mehedi.cls << " " << mehedi.gpa <<endl;
    cout << rahat.roll << " " << rahat.cls << " " << rahat.gpa <<endl;


    

    return 0;
}