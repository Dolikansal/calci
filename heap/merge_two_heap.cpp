#include<iostream>
#include<vector>
using namespace std;

void heapify(vector<int>res , int index , int n){
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if(left < n && res[left] > res[largest]){
        largest = left;
    }
    if(right < n && res[right] > res[largest]){
        largest = right;
    }

    if(largest != index){
        swap(res[largest],res[index]);
        heapify(res, largest , n);
    }
}

vector<int>samosa(vector<int>&v1, vector<int>&v2 , int n , int m){
    vector<int>ans;
    for(int i= 0 ; i<n; i++){
        ans.push_back(v1[i]);
    }
    for(int i =0; i<m ; i++){
        ans.push_back(v2[i]);
    }

    //conver ans vector into max heap

    int p = ans.size()/2 - 1;
    for(int i =0; i<p; i++){
        heapify(ans, i, n);
    }

    return ans;
}
int main(){
    int n, m;
    cout<<"enter the size of vector: ";
    cin>>n>>m;
    vector<int>v1(n);
    vector<int>v2(m);
    cout<<"enter the element of first vector: ";
    for(int i=0; i<n; i++){
        cin>>v1[i];
    }
    cout<<"enter the elemenet of second vector: ";
    for(int i =0; i<m; i++){
        cin>>v2[i];
    }

    vector<int>result = samosa(v1 , v2 , n, m);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}