# 🌳 Tree & Binary Tree 

## 1. What is a Tree?

A **tree** is a hierarchical data structure consisting of nodes, where each node can have zero or more child nodes.

### Key Properties:
- **Unique path**: There is an **acyclic** (non-circular) and **unique path** from the root to every other node.
- Commonly used in: file systems, HTML DOM, databases, etc.

---
## 2. What is a Binary Tree?

A **binary tree** is a type of tree where **each node has at most two children**:
- **Left child**
- **Right child**

### Characteristics:
- There is a **unique path (acyclic)** from the root to every other node.
- Binary trees form the foundation of many data structures and algorithms, such as:
  - **Binary Search Trees**
  - **Heaps**
  - **Expression Trees**

### Typical Node Structure:
Each node generally contains:
1. **Data item**
2. **Pointer to left child**
3. **Pointer to right child**

---

## 3. Tree Terminologies

- **Node**: Fundamental unit containing data and connections to other nodes.
- **Root**: Topmost node of the tree. Every tree has exactly one root.
- **Edge**: A connection between two nodes.
- **Parent**: A node that has child nodes.
- **Child**: A node that descends from another node.
- **Leaf (External) Node**: A node with no children.
- **Internal Node**: A node with at least one child.
- **Sibling Nodes**: Nodes sharing the same parent.
- **Cousin Nodes**: Nodes at the same level but with different parents.
- **Subtree**: Any node and its descendants form a subtree.
- **Ancestor**: Any node in the path from the root to a specific node.
- **Descendant**: Any node that lies beneath another node in the tree hierarchy.
- **Path**: A sequence of nodes and edges from one node to another.
- **Depth of a Node**: Number of edges from the **root** to the node.
- **Height of the Tree**: Number of edges in the longest path from the **root** to any leaf.
- **Diameter**: The longest path between any two nodes in the tree (count includes both endpoints).
- **Degree of Node**: Number of direct children of a node.

---



## 4. Types of Binary Trees

1. **Perfect Binary Tree**  
   All interior nodes have two children and all leaf nodes are at the same level.

2. **Complete Binary Tree**  
   All levels are fully filled except possibly the last level, which is filled from **left to right**.

3. **Full Binary Tree**  
   Every node has either **0 or 2 children**.

---

## 5. Binary Tree Metrics & Formulas

### Perfect Binary Tree:
- **Number of Nodes**:  
  \[
  \text{Total nodes} = 2^{(h + 1)} - 1
  \]

- **Number of Edges**:  
  \[
  \text{Total edges} = 2^{(h + 1)} - 2
  \]

Where `h` is the height of the tree.

---

## 🔗 External Resource

📽️ Animated Visual Explanation:  
[Phitron Binary Tree Video](https://phitron.io/ph047/video/ph047-17_6-creating-binary-tree-animated)

---

