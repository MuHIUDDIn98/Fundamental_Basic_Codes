# Vector-Based Task Management System in C++

## Problem Statement

Implement a simplified **Task Management System** using C++ that leverages the **vector** container from the STL (Standard Template Library). Each task will have a **title**, **priority**, and **completion status**. The system should allow the user to:

1. Add new tasks.
2. Delete tasks by title.
3. Mark tasks as completed.
4. Sort tasks by priority.
5. Display all tasks.
6. Count the number of completed and pending tasks.

---

## Task Structure

Each task is represented by a `struct` with:

```cpp
struct Task {
    string title;
    int priority; // 1 (High) to 5 (Low)
    bool completed;

    Task(string t, int p, bool c = false) : title(t), priority(p), completed(c) {}
};
```

---

## Functional Requirements

### 1. Add Task

- Uses `vector::push_back` to add a new task.

### 2. Delete Task

- Uses `find_if` and `vector::erase` to remove a task by its title.

### 3. Mark Task Complete

- Iterates using a range-based for loop and sets `completed = true`.

### 4. Sort Tasks

- Uses `sort` with a custom comparator to order tasks by priority.

### 5. Display Tasks

- Uses iterators (`begin()` and `end()`) to print all tasks.

### 6. Display Task Status Count

- Iterates through the vector to count completed and pending tasks.

---

## C++ Code Implementation

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Task {
    string title;
    int priority;
    bool completed;

    Task(string t, int p, bool c = false) : title(t), priority(p), completed(c) {}
};

void addTask(vector<Task>& tasks, const string& title, int priority) {
    tasks.push_back(Task(title, priority));
}

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

void displayTasks(const vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
        return;
    }
    cout << "\n--- Task List ---\n";
    int index = 1;
    for (auto it = tasks.begin(); it != tasks.end(); ++it) {
        cout << index++ << ". Task: " << it->title
             << " | Priority: " << it->priority
             << " | Status: " << (it->completed ? "Completed" : "Pending") << '\n';
    }
}

void sortTasks(vector<Task>& tasks) {
    sort(tasks.begin(), tasks.end(), [](const Task& a, const Task& b) {
        return a.priority < b.priority;
    });
    cout << "Tasks sorted by priority.\n";
}

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

int main() {
    vector<Task> tasks;

    addTask(tasks, "Write Report", 2);
    addTask(tasks, "Attend Meeting", 1);
    addTask(tasks, "Code Review", 3);
    addTask(tasks, "Update Resume", 5);

    markComplete(tasks, "Attend Meeting");
    deleteTask(tasks, "Update Resume");

    sortTasks(tasks);
    displayTasks(tasks);
    displayStatusCount(tasks);

    return 0;
}
```

---

## Sample Output

```
Task "Attend Meeting" marked as complete.
Task "Update Resume" deleted.
Tasks sorted by priority.

--- Task List ---
1. Task: Attend Meeting | Priority: 1 | Status: Completed
2. Task: Write Report | Priority: 2 | Status: Pending
3. Task: Code Review | Priority: 3 | Status: Pending

Pending Tasks: 2
Completed Tasks: 1
```

---

## Learning Objectives

This problem helps reinforce:

- Usage of all core `vector` operations: `push_back`, `erase`, `clear`, `insert`, `resize`, `size`, `empty`, etc.
- Searching and sorting using `find_if` and `sort()`
- Custom struct usage and encapsulation
- Iterator-based access and range-based for loops
- Real-world modeling using STL containers

---

## Extensions

- Convert to a class-based system
- Add menu-driven user input
- Save and load tasks using file I/O
- Allow task editing and priority updates

