#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int id;
    string name;
    char section;
    int totalMarks;

    // Constructor
    Student(int _id, const string& _name, char _section, int _totalMarks)
        : id(_id), name(_name), section(_section), totalMarks(_totalMarks) {}

    // Function to compare students based on total marks and ID
    static bool compare(const Student& s1, const Student& s2) {
        if (s1.totalMarks != s2.totalMarks) {
            return s1.totalMarks > s2.totalMarks;
        }
        return s1.id < s2.id;
    }
};

int main() {
    int T;
    cin >> T;

    while (T--) {
        vector<Student> students;

        // Input for three students
        for (int i = 0; i < 3; ++i) {
            int id, totalMarks;
            string name;
            char section;

            cin >> id >> name >> section >> totalMarks;
            students.emplace_back(id, name, section, totalMarks);
        }

        // Sort the students based on the compare function
        sort(students.begin(), students.end(), Student::compare);

        // Output the details of the student with the highest total marks
        cout << students[0].id << " " << students[0].name << " " << students[0].section << " " << students[0].totalMarks << endl;
    }

    return 0;
}
