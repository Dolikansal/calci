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

    void heapify(int index){
        int largest = index;
        int left = (2*index)+1;
        int right = (2*index) + 2;

        while(left >0 && arr[left] > arr[index]){
            largest = index;
        }
        while(right > 0 && arr[right] > arr[index]){
            largest = right;
        }

        if(largest != index){
            swap(arr[largest], arr[index]);
            heapify(largest);
        }
    }
    void remove(){
        if(size == 0){
            cout<<"heap is underflow"<<endl;
            return ;
        }
        cout<<arr[0]<<" is removed from the heap"<<endl;
        arr[0] = arr[size -1];
        size--;

        if(size == 0){
            return ;
        }
        heapify(0);
    }
};
int main(){
    maxheap h(6);
    h.insert(2);
    h.insert(1);
    h.insert(3);
    h.insert(5);
    h.insert(7);
    h.insert(8);
    h.insert(6);
    h.remove();
    return 0;
}