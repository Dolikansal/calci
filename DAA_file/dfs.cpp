#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void dfs(vector<vector<int>>& adj, vector<int>& ans, vector<int>& visited, int node, int n) {
    visited[node] = 1;
    ans.push_back(node);
    for(int i = 0; i < n; i++) {
        if(adj[node][i] == 1 && !visited[i]) {
            dfs(adj, ans, visited, i, n);
        }
    }
}

void dfs_fun(vector<vector<int>>& adj, vector<int>& ans, int n) {
    vector<int> visited(n, 0);
    for(int i = 0; i < n; i++) {
        if(!visited[i]) {
            dfs(adj, ans, visited, i, n);
        }
    }
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
    
    vector<int> ans;
    dfs_fun(adj, ans, n);
    cout << "DFS traversal: ";
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    
    return 0;
}