#include<iostream>
using namespace std;
int main(){
    int arr[6] = {-4,-1, -3, -8, -2, -5};
    int min = INT_MAX;
    for(int i=0; i<6; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout<<min;
    return 0;
}