#include <iostream>
#include <vector>
using namespace std;

// Function to generate the adjacency matrix
void generateAdjMatrix(int vertices, const vector<pair<int, int>>& edges) {
    // Initialize the adjacency matrix with 0s
    vector<vector<int>> adjMatrix(vertices, vector<int>(vertices, 0));

    // Fill the adjacency matrix based on the edges
    for (const auto& edge : edges) {
        int u = edge.first;
        int v = edge.second;
        adjMatrix[u][v] = 1; // Mark edge u -> v
        adjMatrix[v][u] = 1; // Uncomment for an undirected graph (symmetric matrix)
    }

    // Print the adjacency matrix
    cout << "Adjacency Matrix:" << endl;
    for (const auto& row : adjMatrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    // Input number of vertices and edges
    int vertices, edgesCount;
    cout << "Enter the number of vertices: ";
    cin >> vertices;
    cout << "Enter the number of edges: ";
    cin >> edgesCount;

    vector<pair<int, int>> edges;
    cout << "Enter the edges (u v):" << endl;
    for (int i = 0; i < edgesCount; ++i) {
        int u, v;
        cin >> u >> v;
        edges.emplace_back(u, v);
    }

    // Generate the adjacency matrix
    generateAdjMatrix(vertices, edges);

    return 0;
}
