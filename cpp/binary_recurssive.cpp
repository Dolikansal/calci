#include<iostream>
using namespace std;
int binary_recurssive(int *arr, int start, int end, int key){
    int mid = start + (end - start)/2;
    if(arr[mid] == key){
        return mid;
    }

    return (binary_recurssive(arr, mid + 1, end, key) || binary_recurssive(arr, start, mid -1 , key));
}
int main(){
    int arr[7] = {3,6,8,11,23,34,45};
    cout<<binary_recurssive(arr, 0, 6 ,23);
    return 0;
}