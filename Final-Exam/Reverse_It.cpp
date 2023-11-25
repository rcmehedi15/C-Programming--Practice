#include<bits/stdc++.h>
using namespace std;
struct Student {
    string name;
    int cls;
    char section;
    int id;
};

int main() {
    // Input the number of students
    int N;
    cin >> N;

    // Input student data
    vector<Student> students(N);
    for (int i = 0; i < N; ++i) {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id;
    }

    // Reverse the sections
    for (int i = 0; i < N / 2; ++i) {
        swap(students[i].section, students[N - i - 1].section);
    }

    // Output the reversed student data
    for (const auto& student : students) {
        cout << student.name << " " << student.cls << " " << student.section << " " << student.id << endl;
    }

    return 0;
}