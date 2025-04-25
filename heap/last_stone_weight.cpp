#include<iostream>
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
    priority_queue<int>p;
    for(int i=0; i<n; i++){
        p.push(arr[i]);
    }
    int val =0;
    while(p.size()>1){
         val = p.top();
        p.pop();
        int val = val - p.top();
        if(val > 0){
            p.push(val);
        }
    }
    cout<<"last stone weight is: "<<val<<endl;
    return 0;
}