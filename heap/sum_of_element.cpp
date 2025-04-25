#include<iostream>
#include<queue>
using namespace std;
int sum_of_elelemt(int *arr, int n, int k1, int k2){
    int sum = 0;
    priority_queue<int>p1;
     priority_queue<int>p2;
    for(int i=0; i<k1; i++){
            p1.push(arr[i]);
    }
    for(int i=0; i<k2; i++){
        p2.push(arr[i]);
    }

    for(int i=k1; i<n; i++){
        if(p1.top() > arr[i]){
            p1.pop();
            p1.push(arr[i]);
        }
    }
      for(int i=k2; i<n; i++){
        if(p2.top() > arr[i]){
            p2.pop();
            p2.push(arr[i]);
        }
    }
    int sum1 = 0, sum2 =0;
    while(!p1.empty()){
        sum1 = sum1 + p1.top();
        p1.pop();
    }

    while(!p2.empty()){
        sum2 = sum2 + p2.top();
        p2.pop();
    }

    return sum2 - sum1;
}

int main(){
    int n ;
    cout<<"enter the number of elemet in array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elemnet of array: ";
    for(int i=0; i<n ;i++){
        cin>>arr[i];
    }
    int k1, k2;
    cout<<"enter the value of k1 and k2: ";
    cin>>k1>>k2;

    cout<<"sum of element between k1 and k2: "<<sum_of_elelemt(arr, n, k1, k2-1);
    return 0;
}