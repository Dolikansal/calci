#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&v, int start, int end){
    int pos = start;
    for(int i = start; i <= end; i++){
        if(v[i] <= v[end]){
            swap(v[i], v[pos]);
            pos++;
        }
    }
    return pos - 1;
}
void quicksort(vector<int>&v, int start, int end){
    if(start >= end){
        return ;
    }

    int pivot = partition(v, start, end);

    quicksort(v, start, pivot - 1 );
    quicksort(v, pivot, end);
}
int main(){
    int n;
    cout<<"enter the size of vector: ";
    cin>>n;
    vector<int>v(n);
    cout<<"enter the element of vector: ";
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    cout<<"element after quick sort is: ";
    quicksort(v,0,n-1);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}