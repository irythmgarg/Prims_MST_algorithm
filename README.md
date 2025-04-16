# Prims_MST_algorithm
# 🌲 Prim’s Algorithm for Minimum Spanning Tree (MST) in C++

This repository contains an efficient C++ implementation of **Prim's Algorithm** to compute the **Minimum Spanning Tree (MST)** for a weighted undirected graph using a priority queue (Min Heap).

---

## 📌 Problem Statement
Given a weighted, undirected, connected graph, find the sum of the weights of the edges of the **Minimum Spanning Tree**.
---

## 🧠 Algorithm Overview

Prim’s Algorithm works by:

1. Starting from an arbitrary node.
2. Expanding the MST by greedily picking the **minimum weight edge** that connects a vertex inside the MST to a vertex outside.
3. Repeating this until all vertices are included.

We use a **Min Heap (priority queue)** to efficiently pick the next edge with the smallest weight.

---

## 🧾 Input Format

- `V`: Number of vertices in the graph.
- `adj`: Adjacency list where each index represents a node and contains a vector of `{neighbor, weight}` pairs.

---
## 📤 Output Format

- Returns the **total weight** of the edges included in the MST.

---

## ✅ Example Usage

int V = 4;
vector<vector<int>> adj[4];
adj[0].push_back({1, 1});
adj[1].push_back({0, 1});
adj[0].push_back({2, 3});
adj[2].push_back({0, 3});
adj[1].push_back({2, 1});
adj[2].push_back({1, 1});
adj[1].push_back({3, 4});
adj[3].push_back({1, 4});

Solution sol;
int mst_weight = sol.spanningTree(V, adj);
cout << "Weight of MST: " << mst_weight << endl;

📊 Time and Space Complexity
Time Complexity: O(E log V), where E is the number of edges and V is the number of vertices.

Space Complexity: O(V)

📎 Notes
The graph must be connected to have a valid MST.

We use 100000 as a substitute for "infinity" when necessary (not needed here due to Prim’s greedy nature).

👨‍💻 Author
Your Name – @irythmgarg [Ridham Garg]


