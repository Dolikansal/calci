#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Graph {
public:
    int V;    // Number of vertices
    vector<vector<int>> edges;

    Graph(int V);
    void addEdge(int u, int v, int w);
    void bellmanFord(int src);
};

Graph::Graph(int V) {
    this->V = V;
}

void Graph::addEdge(int u, int v, int w) {
    edges.push_back({u, v, w});
}

void Graph::bellmanFord(int src) {
    vector<int> dist(V, INT_MAX);
    dist[src] = 0;

    // Relax all edges (V-1) times
    for (int i = 1; i <= V - 1; i++) {
        for (auto edge : edges) {
            int u = edge[0], v = edge[1], w = edge[2];
            if (dist[u] != INT_MAX && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
            }
        }
    }

    // Check for negative weight cycles
    for (auto edge : edges) {
        int u = edge[0], v = edge[1], w = edge[2];
        if (dist[u] != INT_MAX && dist[u] + w < dist[v]) {
            cout << "Graph contains negative weight cycle\n";
            return;
        }
    }

    // Print the shortest distances
    cout << "Vertex Distance from Source (" << src << "):\n";
    for (int i = 0; i < V; i++) {
        cout << "Vertex " << i << " -> " << dist[i] << endl;
    }
}

int main() {
    Graph g(5);

    g.addEdge(0, 1, -1);
    g.addEdge(0, 2, 4);
    g.addEdge(1, 2, 3);
    g.addEdge(1, 3, 2);
    g.addEdge(1, 4, 2);
    g.addEdge(3, 2, 5);
    g.addEdge(3, 1, 1);
    g.addEdge(4, 3, -3);

    g.bellmanFord(0);

    return 0;
}
