#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> bfs(vector<vector<int>>& adj, int src) {
    vector<int> ans;
    vector<bool> visited(adj.size(), false);
    queue<int> q;
    
    q.push(src);
    visited[src] = true;
    
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for(int i = 0; i < adj[node].size(); i++) {  
            int neighbor = adj[node][i];
            if(!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> adj = {{2, 3, 1}, {0}, {0, 4}, {0}, {2}};
    int src = 0;
    vector<int> ans = bfs(adj, src);
    
    for(int i = 0; i < ans.size(); i++) {  
        cout << ans[i] << " ";
    }
    
    return 0;
}
