#include<iostream>
#include<vector>
#include<climits>  
using namespace std;

void floyd(vector<vector<int>>&v){
    int n = v.size();
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(v[i][j] == -1){
                v[i][j] = INT_MAX;
            }
        }
    }
    for(int k = 0; k < n; k++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(v[i][k] == INT_MAX || v[k][j] == INT_MAX){
                    continue;
                }
                if(v[i][j] > v[i][k] + v[k][j]){
                    v[i][j] = v[i][k] + v[k][j];
                }
            }
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(v[i][j] == INT_MAX){
                v[i][j] = -1;
            }
        }
    }
}

int main(){
    int n;
    cout << "size: ";
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> v[i][j];
        }
    }
    
    floyd(v);  

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << v[i][j] << " ";
        }
        cout << endl; 
    }
    
    return 0;
}