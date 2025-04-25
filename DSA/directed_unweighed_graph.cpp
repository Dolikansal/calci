#include<iostream>
#include<vector>
using namespace std;
int main(){
    int vertex, edges;
    cout<<"enter the number of vertex and edges: ";
    cin>>vertex>>edges;
    vector<vector<bool> >matrix(vertex, vector<bool>(vertex, 0));

    cout<<"enter the vertex and edges: ";
    int  u ,v;
    for(int i=0; i<edges; i++){
        cin>>u>>v;

        matrix[u][v] = 1;
    }

    for(int i=0; i<vertex; i++){
        for(int j=0; j<vertex; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}