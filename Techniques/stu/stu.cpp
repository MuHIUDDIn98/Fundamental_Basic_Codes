#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student {
    string name;
    int roll;
    int marks;

    Student(string _name, int _roll, int _marks) {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

bool compareStudents(const Student& a, const Student& b) {
    if (a.marks != b.marks)
        return a.marks > b.marks; // Sort by marks in descending order
    else
        return a.roll < b.roll; // If marks are equal, sort by roll in ascending order
}

int main() {
    int N, Q;
    cin >> N;

    vector<Student> students;
    for (int i = 0; i < N; ++i) {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        students.push_back(Student(name, roll, marks));
    }

    sort(students.begin(), students.end(), compareStudents);

    cin >> Q;
    for (int i = 0; i < Q; ++i) {
        int command;
        cin >> command;

        if (command == 0) {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            students.push_back(Student(name, roll, marks));
            sort(students.begin(), students.end(), compareStudents);
            cout << students.front().name << " " << students.front().roll << " " << students.front().marks << endl;
        } else if (command == 1) {
            if (!students.empty())
                cout << students.front().name << " " << students.front().roll << " " << students.front().marks << endl;
            else
                cout << "Empty" << endl;
        } else if (command == 2) {
            if (!students.empty()) {
                students.erase(students.begin());
                if (!students.empty())
                    cout << students.front().name << " " << students.front().roll << " " << students.front().marks << endl;
                else
                    cout << "Empty" << endl;
            } else {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
