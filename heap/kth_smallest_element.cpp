#include<iostream>
#include<queue>
using namespace std;
int using_sorting(int *arr, int n, int k){
    for(int i=0; i<n-1; i++){
        for(int j= 0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    int ele = arr[k];
    return ele;
}

int using_heap(int *arr, int n, int k) {
    priority_queue<int> maxHeap; 
    for (int i = 0; i < n; i++) {
        maxHeap.push(arr[i]);
        if (maxHeap.size() > k) {
            maxHeap.pop(); 
        }
    }
    return maxHeap.top(); 
}

int using_approach(int *arr, int n, int k){
    priority_queue<int>p;
    for(int i=0; i<k; i++){
        p.push(arr[i]);
    }

    for(int i=k; i<n; i++){
        if(p.top()>arr[i]){
            p.pop();
            p.push(arr[i]);
        }
    }
    return p.top();
}

int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the element of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k ;
    cout<<"enter the kth position: ";
    cin>>k;
    cout<<"kth smallest elemet is using simple array: "<<using_sorting(arr, n, k-1)<<endl;
    cout<<"kth smallest elemet is using max heap is: "<<using_heap(arr, n, k)<<endl;
    cout<<"kth smallest elemet is using heap is: "<<using_approach(arr, n, k)<<endl;
    return 0;
}