#include<iostream>
#include<vector>
using namespace std;
int main(){
    int vertex,edges;
    cout<<"enter the number of vertex and edges: ";
    cin >>vertex>>edges;

    vector<vector<int> >matrix(vertex, vector<int>(vertex, 0));
    cout<<"enter the vertex and edges and weight: "<<endl;
    int u , v , weight;
    for(int i=0; i<edges; i++){
        cin>>u>>v>>weight;

        matrix[u][v] = weight;
        matrix[v][u] = weight;

    }

    for(int i=0; i<vertex ; i++){
        for(int j=0; j<vertex; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}