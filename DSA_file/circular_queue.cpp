#include<iostream>
using namespace std;
class circular_queue{
    int *arr;
    int front , rear ;
    int size;
    public:
    circular_queue(int n){
        arr = new int[n];
        front = -1;
        rear = -1;
        size = n;
    }

    bool is_empty(){
        return front == -1;
    }

    bool is_full(){
        return (rear + 1)%size == front;
    }

    void push(int value){
        if(is_empty()){
            front = 0;
            rear = 0;
            arr[0] = value;
        }
        else if(is_full()){
            cout<<"queue is overflow"<<endl;
        }
        else{
            rear = (rear + 1)% size ;
            arr[rear] = value;
        }
        cout<<"pushed "<<value<<" in the circular queue "<<endl;
    }

    void pop(){
        if(is_empty()){
            cout<<"queue underflow "<<endl;
        }
        else if(front == rear){
            cout<<"poped "<<arr[front]<<" from the queue"<<endl;
            front = rear = -1;
        }
        else{
            cout<<"poped "<<arr[front]<<" from the queue"<<endl;
            front = (front + 1)%size;
        }
    }

    int start(){
        if(is_empty()){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
};
int main(){
    circular_queue q(5);
    q.push(7);
    q.push(7);
    q.push(7);
    q.push(7);
    q.push(7);
    return 0;
}