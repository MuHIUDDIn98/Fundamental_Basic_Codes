
#include<bits/stdc++.h>
#include <vector>
#include <queue>

using namespace std;

struct Student {
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks){
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

struct CompareStudents {
    bool operator()(const Student& a, const Student& b) {
        if (a.marks != b.marks)
            return a.marks < b.marks; // Sort by marks in descending order
        else
            return a.roll > b.roll; // If marks are equal, sort by roll in ascending order
    }
};

int main() {
    int N, Q;
    cin >> N;

    priority_queue<Student, vector<Student>, CompareStudents> pq;

    for (int i = 0; i < N; ++i) {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        pq.push(Student(name, roll, marks));
    }

    cin >> Q;
    for (int i = 0; i < Q; ++i) {
        int command;
        cin >> command;

        if (command == 0) {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            pq.push(Student(name, roll, marks));
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        } else if (command == 1) {
            if (!pq.empty())
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            else
                cout << "Empty" << endl;
        } else if (command == 2) {
            if (!pq.empty()) {
                pq.pop();
                if (!pq.empty())
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                else
                    cout << "Empty" << endl;
            } else {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
//problem link :  https://www.hackerrank.com/contests/final-exam-a-basic-data-structures-a-batch-04/challenges/get-current-max