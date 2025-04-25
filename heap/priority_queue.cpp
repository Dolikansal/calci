#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
        priority_queue<int,vector<int>, greater<int>> p;
    int arr[5]= {3,5,1,2,4};
    for(int i=0; i<5; i++){
        p.push(arr[i]);
    }

    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
    return 0;
}