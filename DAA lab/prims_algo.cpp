#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int spanningTree(int v, vector<vector<int>> adj[]) {
       priority_queue< pair<int, pair<int, int>> , vector< pair<int, pair<int, int>>> , greater< pair<int, pair<int, int>>>>pq;
       vector<bool>is_mst(v,0);
       vector<int>parent(v);
       
       int cost = 0;
       pq.push({0 , {0, -1}});
       while(!pq.empty()){
           int wt = pq.top().first;
           int node = pq.top().second.first;
           int par = pq.top().second.second;
           
           pq.pop();
            
            if(!is_mst[node]){
                is_mst[node] = 1;
                cost += wt;
                parent[node] = par;
                
                for(int j = 0; j<adj[node].size(); j++){
                    if(!is_mst[adj[node][j][0]]){
                        pq.push({adj[node][j][1] , {adj[node][j][0] , node}});
                    }
                }
            }
       }
       return cost;
    }
};

int main() {
    int v = 5; 
    vector<vector<int>> adj[v];
    adj[0].push_back({1, 2});
    adj[1].push_back({0, 2});
    adj[1].push_back({2, 3});
    adj[2].push_back({1, 3});
    adj[2].push_back({3, 6});
    adj[3].push_back({2, 6});
    adj[0].push_back({3, 8});
    adj[3].push_back({0, 8});
    adj[0].push_back({4, 5});
    adj[4].push_back({0, 5});
    adj[4].push_back({3, 7});
    adj[3].push_back({4, 7});

    Solution obj;
    int mstWeight = obj.spanningTree(v, adj);
    cout << "Weight of the Minimum Spanning Tree is: " << mstWeight << endl;

    return 0;
}
