#include <iostream>
#include <vector>
#include <climits>
#include <set>

using namespace std;

typedef pair<int, int> iPair;

class Graph {
public:
    int V;    // Number of vertices
    vector<vector<iPair>> adj;

    Graph(int V);
    void addEdge(int u, int v, int w);
    void dijkstra(int src);
};

Graph::Graph(int V) {
    this->V = V;
    adj.resize(V);
}

void Graph::addEdge(int u, int v, int w) {
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));  // If the graph is undirected
}

void Graph::dijkstra(int src) {
    set<iPair> pq;
    vector<int> dist(V, INT_MAX);

    pq.insert(make_pair(0, src));
    dist[src] = 0;

    while (!pq.empty()) {
        int u = pq.begin()->second;
        pq.erase(pq.begin());

        for (auto& neighbor : adj[u]) {
            int v = neighbor.first;
            int weight = neighbor.second;

            if (dist[u] + weight < dist[v]) {
                if (dist[v] != INT_MAX) {
                    pq.erase(pq.find(make_pair(dist[v], v)));
                }
                dist[v] = dist[u] + weight;
                pq.insert(make_pair(dist[v], v));
            }
        }
    }

    // Print the shortest distances
    cout << "Vertex Distance from Source (" << src << "):\n";
    for (int i = 0; i < V; i++) {
        cout << "Vertex " << i << " -> " << dist[i] << endl;
    }
}

int main() {
    Graph g(9);

    g.addEdge(0, 1, 4);
    g.addEdge(0, 7, 8);
    g.addEdge(1, 2, 8);
    g.addEdge(1, 7, 11);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 5, 4);
    g.addEdge(2, 8, 2);
    g.addEdge(3, 4, 9);
    g.addEdge(3, 5, 14);
    g.addEdge(4, 5, 10);
    g.addEdge(5, 6, 2);
    g.addEdge(6, 7, 1);
    g.addEdge(6, 8, 6);
    g.addEdge(7, 8, 7);

    g.dijkstra(0);

    return 0;
}
