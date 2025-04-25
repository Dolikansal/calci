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
    int turn;
    cout<<"enter the number of turns: ";
    cin>>turn;
    int max_choc= 0;
    while(turn != 0 && !p.empty()){
         max_choc = max_choc + p.top();
           p.pop();
        if(p.top()/2>0){
            p.push(p.top()/2>0);
        }
        turn --;
    }
    cout<<"max_choclate is: "<<max_choc<<endl;
    return 0;
}