#include<bits/stdc++.h>
using namespace std;

void printPriorityQueu( priority_queue<int, vector<int>, greater<int>> pq){
    cout<<"priority Queue :"<<endl;
            while(!pq.empty()){
                cout<<pq.top()<<" ";
                pq.pop();
            }
            cout<<endl;
}

// Interactive Min-Heap (Priority Queue) Demonstration
int main() {
    // A min-heap: the smallest element is always at the top.
    
    priority_queue<int, vector<int>, greater<int>> pq;

    // --- Clearer Instructions ---
    cout << "Enter a command number:\n";
    cout << "  0 <value> : Insert a value (e.g., 0 50)\n";
    cout << "  1         : Pop the smallest value\n";
    cout << "  2         : Print the smallest value\n";
    cout << "  Any other number to exit.\n";
    cout << "-----------------------------------\n";

    int command;
    // Loop continues as long as valid integer input is given
    while (cin >> command) {

        if (command == 0) {
            int x;
            cin >> x;
            pq.push(x);
            cout << "Inserted " << x << "\n";
            printPriorityQueu(pq);

            
        } else if (command == 1) {
            // FIX: Added check to prevent popping from an empty queue
            if (!pq.empty()) {
                cout << "Popped " << pq.top() << "\n";
                pq.pop();

                printPriorityQueu(pq);


            } else {
                cout << "Error: Priority queue is empty. Cannot pop.\n";
            }
        } else if (command == 2) {
            // FIX: Added check to prevent reading the top of an empty queue
            if (!pq.empty()) {
                cout << "Top element: " << pq.top() << "\n";
            } else {
                cout << "Error: Priority queue is empty. No top element.\n";
            }
        } else {
            // Exit the loop if the command is not 0, 1, or 2
            cout << "Exiting...\n";
            break;
        }
    }

    return 0;
}