#include<iostream>
using namespace std;
class maxheap{
    int *arr;
    int size;
    int total_size;
    public:
    maxheap(int n){
        arr = new int[n];
        size = 0;
        total_size = n;
    }

    void insert(int value){
        if(size == total_size){
            cout<<"heap is overflow";
            return ;
        }

        arr[size] = value;
        int index = size;
        size++;

        while(index > 0 && arr[(index - 1)/2 ] < arr[index]){
            swap(arr[(index-1)/2], arr[index]);
            index = (index -1)/2;
        }
        cout<<arr[index]<<" is inderted in the heap"<<endl;
    }
    void print(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    maxheap h(6);
    h.insert(2);
    h.insert(1);
    h.insert(3);
    h.print();
    return 0;
}