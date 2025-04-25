#include<iostream>
#include<vector>
using namespace std;

void dfs(int node, vector<int>& visited, vector<int>& ans, vector<int> adj[]) {
    visited[node] = 1;
    ans.push_back(node);

    for (int i = 0; i < adj[node].size(); i++) {
        if (!visited[adj[node][i]]) {
            dfs(adj[node][i], visited, ans, adj);
        }
    }
}

vector<int> dfs_graph(int v, vector<int> adj[]) {
    vector<int> visited(v, 0);
    vector<int> ans;
    dfs(0, visited, ans, adj);
    return ans;
}

int main() {
    int v = 6;
    vector<int> adj[v];

    adj[0].push_back(1);
    adj[0].push_back(5);
    adj[1].push_back(0);
    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[2].push_back(7);
    adj[3].push_back(7);
    adj[5].push_back(0);
    adj[7].push_back(2);
    adj[7].push_back(3);

    vector<int> result = dfs_graph(v, adj);

    cout << "DFS Traversal: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
