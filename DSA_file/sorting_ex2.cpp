#include<iostream>
#include<limits>
using namespace std;
void bubblesort(int *arr, int n){
      for(int i =0; i<n-1 ; i++){
        for(int j = 0;j < n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void selectionsort(int *arr, int n){
    for(int i =0; i<n-1; i++){
        int min = INT_MAX;
        int mindex = -1;
        for(int j =i; j<n ; j++){
            if(arr[j] < min){
                min = arr[j];
                mindex = j;
            }
        }
        swap(arr[i], arr[mindex]);
    }
}

void insertionsort(int *arr, int n){
    for(int i=0; i<n-1; i++){
        for(int j =i + 1; j>=0 && arr[j] < arr[j-1] ; j--){
            swap(arr[j], arr[j-1]);
        }
    }
}
int main(){
    int n;
    cout<<"enter the number of elemenet: ";
    cin>>n;
    int arr[n];
    
    cout<<"enter the element of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"sorted array using insertion  sort is: ";
    insertionsort(arr, n);
    for(int i =0; i<n ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<"sorted array using selection  sort is: ";
    selectionsort(arr, n);
    for(int i =0; i<n ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<"sorted array using bubble sort is: ";
    bubblesort(arr, n);
    for(int i =0; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}