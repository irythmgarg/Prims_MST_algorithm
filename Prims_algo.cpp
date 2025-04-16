#include <vector>
#include <queue>
#include <utility>
using namespace std;

/**
 * Class to compute the Minimum Spanning Tree (MST) of a weighted undirected graph
 * using Prim's Algorithm with a priority queue (Min Heap).
 */
class Solution {
    typedef pair<int, int> P; // Alias for storing {weight, node}

public:
    /**
     * Function to compute the sum of weights of the edges in the Minimum Spanning Tree (MST).
     *
     * @param V     Number of vertices in the graph.
     * @param adj   Adjacency list where each element is a vector of {neighbor, weight}.
     * @return      Total weight (cost) of the MST.
     */
    int spanningTree(int V, vector<vector<int>> adj[]) {
        // Min-heap priority queue to pick the minimum weight edge at each step
        priority_queue<P, vector<P>, greater<P>> pq;
        pq.push({0, 0}); // {weight, node}

        vector<bool> inMST(V, false); // Track whether a node is included in MST
        int sum = 0; // Total weight of MST

        while (!pq.empty()) {
            auto p = pq.top();
            pq.pop();

            int wt = p.first;
            int node = p.second;

            // Skip if node is already included in MST
            if (inMST[node])
                continue;

            inMST[node] = true; // Mark node as included
            sum += wt; // Add edge weight to total MST weight

            // Explore all adjacent nodes
            for (auto& tmp : adj[node]) {
                int neighbor = tmp[0];
                int neighbor_wt = tmp[1];

                // If neighbor is not in MST, push it to the queue
                if (!inMST[neighbor]) {
                    pq.push({neighbor_wt, neighbor});
                }
            }
        }

        return sum;
    }
};
