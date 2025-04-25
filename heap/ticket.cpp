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
    int num;
    cout<<"enter the number of tickets needs: ";
    cin>>num;
    int total =0;
    while(num > 0 && !p.empty()){
         total = total + p.top();

         if(p.top() - 1 > 0){
            p.push(p.top()-1);
            p.pop();
            num--;
         }

    }
    cout<<"maximum profit is: "<<total;
    return 0;
}