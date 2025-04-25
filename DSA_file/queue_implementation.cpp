#include<iostream>
using namespace std;
class queue{
    int *arr;
    int size;
    int front;
    int rear ;
    public:
    queue(int s){
        size = s;
        arr = new int[s];
        front = -1;
        rear = -1;
    }
    bool is_empty(){
        return front == -1;
    }

    bool is_full(){
        return rear == size - 1; 
    }

    void push(int value){
        if(is_empty()){
            front = 0;
            rear = 0;
            arr[0] = value;
        }
        else if(is_full()){
            cout<<" queue overflow "<<endl;
            return ;
        }

        rear = rear + 1;
        arr[rear] = value;
        cout<<"pushed "<<value<<" in the queue "<<endl;
    }

    void pop(){
        if(is_empty()){
            cout<<" queue is underflow "<<endl;
            return ;
        }
        else if(front == rear){
           cout<<"poped "<<arr[front]<<" from the queue"<<endl;
           front = rear = -1;
        }
        else{
            cout<<"poped "<<arr[front]<<" from the queue"<<endl;
            front = front + 1;
        }
    }
    int start(){
        if(is_empty()){
            cout<<"queue is empty "<<endl;
            return -1;
        }else{
            return arr[front];
        }
    }
};
int main(){
    queue q(5);
    q.push(7);
    q.push(7);
    q.push(7);
    q.push(7);
    q.push(7);
    return 0;
}