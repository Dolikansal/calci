#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elemenet: ";
    cin>>n;
    int arr[n];
    cout<<"enter the element of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i =0; i<n-1 ; i++){
        for(int j = 0;j < n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"sorted array is: ";
    for(int i =0; i<n ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    int ans = -1;
    int x;
    cout<<"enter the target value: ";
    cin>>x;
    int start = 0;
    int end = n-1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == x){
            ans = mid;
            break;
        }
        else if(arr[mid] > x){
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    if(ans != -1){
         cout<<"element present at "<<ans<<" position ";
    }else{
        cout<<"elment is not present in array";
    }
    return 0;
}