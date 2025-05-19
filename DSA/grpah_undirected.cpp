#include<iostream>
#include<vector>
using namespace std;
int main(){
    int vertex, edges;
    cout<<"enter the number of vertex and edges: ";
    cin>>vertex>>edges;

    vector<int>matrix[vertex];
    cout<<"enter the vertex connection: ";
    int u , v;
    for(int i=0; i<edges; i++){
        cin>>u>>v;

        matrix[u].push_back(v);
        matrix[v].push_back(u);

    }

    for(int i=0; i<vertex; i++){
        cout<<i<<" -> ";
        for(int j=0; j<matrix[i].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}