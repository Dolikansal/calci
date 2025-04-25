#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int n;
    cout<<"enter the size: ";
    cin>>n;
    int arr[n];
    cout<<"enter the element of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int height = 0;
    while(n>1){
        n = n/2;
        height = height + 1;
    }
    cout<<"height f heap is: "<<height;
    return 0;
}