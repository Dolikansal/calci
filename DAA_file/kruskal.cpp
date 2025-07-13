#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int findParent(int u, vector<int>& parent) {
    if (u == parent[u]) return u;
    return parent[u] = findParent(parent[u], parent); 
}

void unionByRank(int u, int v, vector<int>& parent, vector<int>& rank) {
    int pu = findParent(u, parent);
    int pv = findParent(v, parent);
    
    if (pu == pv) return; 
    
    if (rank[pu] > rank[pv]) {
        parent[pv] = pu;
    } 
    else if (rank[pu] < rank[pv]) {
        parent[pu] = pv;
    } 
    else {
        parent[pu] = pv;
        rank[pv]++;
    }
}

int spanningTree(vector<vector<int>>&adj, int n) {
    vector<int> parent(n);
    vector<int> rank(n, 0);
    for(int i = 0; i < n; i++) {
        parent[i] = i;
    }
    
    priority_queue<pair<int, pair<int, int>>, 
                  vector<pair<int, pair<int, int>>>, 
                  greater<pair<int, pair<int, int>>>> pq;
    
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    for (int u = 0; u < n; u++) {
        for (int i = 0; i <n; i++) {
        int v = i, wt = adj[u][i];
        if (adj[u][v] >0 && !visited[u][v]) {
            pq.push({wt, {u, v}});
            visited[u][v] = true;
            visited[v][u] = true; 
        }
        }
    }
    
    int cost = 0;
    while (!pq.empty()) {
        auto it = pq.top();
        pq.pop();
        int wt = it.first;
        int u = it.second.first;
        int v = it.second.second;

        if (findParent(u, parent) != findParent(v, parent)) {
            cost += wt;
            unionByRank(u, v, parent, rank);
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
    
    vector<vector<int>>edges(m,vector<int>(3));
    cout << "Enter the edges: ";
    for (int i = 0; i < m; i++) {
        cin>>edges[i][0]>>edges[i][1]>>edges[i][2];
    }
    vector<vector<int>>adj(n,vector<int>(n,0));
    for(int i=0;i<m;i++){
          int u = edges[i][0];
          int v=edges[i][1];
          int wt = edges[i][2];
          adj[u][v] = wt;
          adj[v][u] = wt;
    }
    
    for(int i =0; i<n ; i++){
        for(int j = 0; j<n ; j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    int mstCost = spanningTree(adj, n);
    cout << "\nCost of Minimum Spanning Tree: " << mstCost << endl;
    
    return 0;
}