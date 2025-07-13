#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> bellman(vector<vector<int>>& edges, int v, int src) {
    int n = edges.size();
    vector<int> dist(v, INT_MAX);
    dist[src] = 0;
    for(int i = 0; i < v-1; i++) {
        for(int j = 0; j < n; j++) {
            int u = edges[j][0];
            int v = edges[j][1];
            int wt = edges[j][2];
            
            if(dist[u] != INT_MAX && dist[u] + wt < dist[v]) {
                dist[v] = dist[u] + wt;
            }
        }
    }
    for(int j = 0; j < n; j++) {
        int u = edges[j][0];
        int v = edges[j][1];
        int wt = edges[j][2];
        
        if(dist[u] != INT_MAX && dist[u] + wt < dist[v]) {
            return {-1};
        }
    }
    
    return dist;
}

int main() {
    int n, m;
    cout << "vertices: ";
    cin >> n;
    cout << "edges: ";
    cin >> m;
    vector<vector<int>> edges(m, vector<int>(3));
    
    for(int i = 0; i < m; i++) {
        cin >> edges[i][0] >> edges[i][1] >> edges[i][2];
    }
    
    vector<int> ans = bellman(edges, n, 0);
    
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    
    return 0;
}