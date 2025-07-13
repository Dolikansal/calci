#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int spaining(vector<vector<int>>& adj, int n) {
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    vector<int> parent(n, -1);
    vector<bool> visited(n, false);
    
    int cost = 0;
    pq.push({0, {0, -1}}); 
    
    while(!pq.empty()) {
        int wt = pq.top().first;
        int node = pq.top().second.first;
        int par = pq.top().second.second;
        pq.pop();
        
        if(!visited[node]) {
            visited[node] = true;
            cost += wt;
            parent[node] = par;
            
            for(int i = 0; i < n; i++) {
                if(adj[node][i] != 0 && !visited[i]) { 
                    pq.push({adj[node][i], {i, node}});
                }
            }
        }
    }
    return cost;
}

int main() {
    int n, m;
    cout << "Enter the number of vertices: ";
    cin >> n;
    cout << "Enter the number of edges: ";
    cin >> m;
    
    vector<vector<int>> edges(m, vector<int>(3));
    for (int i = 0; i < m; i++) {
        cin >> edges[i][0] >> edges[i][1] >> edges[i][2];
    }

    vector<vector<int>> adj(n, vector<int>(n, 0));
    for (int i = 0; i < m; i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        int wt = edges[i][2];
        adj[u][v] = wt;
        adj[v][u] = wt;
    }
    
    cout << "Adjacency matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "Minimum Spanning Tree cost: " << spaining(adj, n) << endl;
    return 0;
}v