#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// Task structure
struct Task {
    string title;
    int priority;     // 1 = High, 5 = Low
    bool completed;

    Task(string t, int p, bool c = false)
        : title(t), priority(p), completed(c) {}
};

// Function to add a task
void addTask(vector<Task>& tasks, const string& title, int priority) {
    tasks.push_back(Task(title, priority));
    cout << "Task added successfully.\n";
}

// Function to delete a task by title
void deleteTask(vector<Task>& tasks, const string& title) {
    auto it = find_if(tasks.begin(), tasks.end(), [&](Task& task) {
        return task.title == title;
    });

    if (it != tasks.end()) {
        tasks.erase(it);
        cout << "Task \"" << title << "\" deleted.\n";
    } else {
        cout << "Task not found.\n";
    }
}

// Function to mark a task as completed
void markComplete(vector<Task>& tasks, const string& title) {
    for (Task& task : tasks) {
        if (task.title == title) {
            task.completed = true;
            cout << "Task \"" << title << "\" marked as complete.\n";
            return;
        }
    }
    cout << "Task not found.\n";
}

// Function to display all tasks
void displayTasks(const vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
        return;
    }

    cout << "\n--- Task List ---\n";
    int index = 1;
    for (const Task& task : tasks) {
        cout << index++ << ". Task: " << task.title
             << " | Priority: " << task.priority
             << " | Status: " << (task.completed ? "Completed" : "Pending") << '\n';
    }
}

// Function to sort tasks by priority
void sortTasks(vector<Task>& tasks) {
    sort(tasks.begin(), tasks.end(), [](const Task& a, const Task& b) {
        return a.priority < b.priority;
    });
    cout << "Tasks sorted by priority.\n";
}

// Function to display the count of completed and pending tasks
void displayStatusCount(const vector<Task>& tasks) {
    int completed = 0, pending = 0;
    for (const Task& task : tasks) {
        if (task.completed)
            completed++;
        else
            pending++;
    }
    cout << "\nPending Tasks: " << pending << "\nCompleted Tasks: " << completed << '\n';
}

// Main menu-driven interface
int main() {
    vector<Task> tasks;
    int choice;

    while (true) {
        cout << "\n====== Task Management System ======\n";
        cout << "1. Add Task\n";
        cout << "2. Delete Task\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Display All Tasks\n";
        cout << "5. Sort Tasks by Priority\n";
        cout << "6. Display Status Count\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Clear newline from buffer

        string title;
        int priority;

        switch (choice) {
            case 1:
                cout << "Enter task title: ";
                getline(cin, title);
                cout << "Enter priority (1 = High, 5 = Low): ";
                cin >> priority;
                cin.ignore();
                addTask(tasks, title, priority);
                break;

            case 2:
                cout << "Enter task title to delete: ";
                getline(cin, title);
                deleteTask(tasks, title);
                break;

            case 3:
                cout << "Enter task title to mark complete: ";
                getline(cin, title);
                markComplete(tasks, title);
                break;

            case 4:
                displayTasks(tasks);
                break;

            case 5:
                sortTasks(tasks);
                break;

            case 6:
                displayStatusCount(tasks);
                break;

            case 0:
                cout << "Exiting Task Manager. Goodbye!\n";
                return 0;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}