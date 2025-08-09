#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
        string name;
        int roll;
        int marks;
};

// Custom comparator for priority_queue
class Compare {
    public:
        bool operator()( Student a, const Student b)  {
            if (a.marks == b.marks)
                return a.roll > b.roll;  // smaller roll first if marks are same
            return a.marks < b.marks;    // higher marks first
        }
};

void printTop(priority_queue<Student, vector<Student>, Compare> pq) {
    if (!pq.empty()) {
        Student top = pq.top();
        cout << top.name << " " << top.roll << " " << top.marks << "\n";
    } else {
        cout << "Empty\n";
    }
}

int main() {
    int n;
    cin >> n;

    priority_queue<Student, vector<Student>, Compare> pq;

    for (int i = 0; i < n; i++) {
        Student s;
        cin >> s.name >> s.roll >> s.marks;
        pq.push(s);
    }

    int q;
    cin >> q;

    while (q--) {
        int cmd;
        cin >> cmd;

        if (cmd == 0) { 
            Student s;
            cin >> s.name >> s.roll >> s.marks;
            pq.push(s);
            printTop(pq);

        } else if (cmd == 1) { 
            printTop(pq);

        } else if (cmd == 2) { 
            if (!pq.empty()) pq.pop();
            printTop(pq);

        } else {
            break; 
        }
    }

    return 0;
}
