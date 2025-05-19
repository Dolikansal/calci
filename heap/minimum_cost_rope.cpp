#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the element of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    priority_queue<int,vector<int>,greater<int>>p;
    for (int i=0; i<n; i++){
        p.push(arr[i]);
    }
    int cost = 0;
    while(p.size()>1){
        int value  = p.top();
        p.pop();
        value = value + p.top();
        p.pop();
        cost = cost + value;
        p.push(value);
    }
    cout<<"minimum cost is: "<<cost;
    return 0;
}