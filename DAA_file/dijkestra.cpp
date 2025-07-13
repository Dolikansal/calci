#include<iostream>
#include<vector>
#include<climits>
#include<queue>
using namespace std;
vector<int>dijkestra(vector<vector<pair<int, int>>>&adj , int src){
    int n =adj.size();
    vector<int>dist(n, INT_MAX);
    vector<bool>visited(n, 0);
    dist[src] = 0;
    priority_queue<pair<int, int> , vector<pair<int, int>> , greater<pair<int, int>>>pq;
    pq.push({0, src});
    
    while(!pq.empty()){
        int curr_dis = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        
        if(visited[node]) continue;
        
        visited[node] = 1;
        for (int i = 0; i < adj[node].size(); i++) {
            pair<int, int> edge = adj[node][i];
            int neighbor = edge.first;
            int wt = edge.second;
            if (dist[node] + wt < dist[neighbor]) {
            dist[neighbor] = dist[node] + wt;
            pq.push(make_pair(dist[neighbor], neighbor));
            }
        }
    }
    return dist;
}
int main(){
    int n , m;
    cout<<"enter the number of vertices and edges: ";
    cin>>n>>m;
    vector<vector<int>>edges(m , vector<int>(3));
    for(int i =0; i<m; i++){
        cin>>edges[i][0]>>edges[i][1]>>edges[i][2];
    }
    vector<vector<pair<int, int>>>adj(n);
    for(int i = 0; i<m ; i++){
        int u = edges[i][0];
        int v = edges[i][1];
        int wt = edges[i][2];
        
        adj[u].push_back({v,wt});
        adj[v].push_back({u, wt});
    }
    vector<int>ans = dijkestra(adj, 0);
    for(int i =0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}