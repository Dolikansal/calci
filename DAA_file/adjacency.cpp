#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n , m;
    cout<<"enter the no. of vertices: ";
    cin>>n;
    cout<<"enter the no. of edges: ";
    cin>>m;
    vector<vector<int>>edges(n , vector <int> (n,0));
    for(int i = 0 ; i<n ; i++){
        cin>>edges[i][0]>>edges[i][1];
    }
    
    vector<vector<int>>adj(n , vector<int>(m , 0));
    for(int i = 0 ; i<adj.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];
        
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    
    for(int i = 0 ; i<n; i++){
        for(int j = 0 ; j<m ; j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}