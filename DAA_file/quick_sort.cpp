#include<iostream>
#include<vector>
using namespace std;
int partition(int start, int end , vector <int>&v){
    int pivot = v[end];
    int i = start - 1;
    for(int j = start; j<end; j++){
        if(v[j] <= pivot){
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i+1],v[end]);
    return (i+1);
}
void quicksort(int start, int end , vector <int>&v){
    if(start < end){
        int pi = partition(start , end, v);
        quicksort(start, pi-1, v);
        quicksort(pi+1,end , v);
    }
}
int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    quicksort(0, n-1, v);
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}