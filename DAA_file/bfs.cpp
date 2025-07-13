#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> bfs(vector<vector<int>>& adj, vector<bool>& visited) {
    vector<int> ans;
    queue<int> q;
    q.push(0);
    visited[0] = true;
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        ans.push_back(node);
        
        for(int i = 0; i < adj.size(); i++) {
            if(adj[node][i] == 1 && !visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
    return ans;
}

int main() {
    int n, m;
    cout << "enter the no. of vertices: ";
    cin >> n;
    cout << "enter the no. of edges: ";
    cin >> m;
    
    vector<vector<int>> edges(m, vector<int>(2));
    cout << "enter the edges (pairs of vertices):\n";
    for(int i = 0; i < m; i++) {
        cin >> edges[i][0] >> edges[i][1];
    }
    
    vector<vector<int>> adj(n, vector<int>(n, 0));
    for(int i = 0; i < m; i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    
    cout << "Adjacency matrix:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    
    vector<bool> visited(n, false);
    vector<int> ans = bfs(adj, visited);
    
    cout << "BFS traversal is: ";
    for(int i = 0 ; i<ans.size() ; i++) {
        cout << node << " ";
    }
    return 0;
}