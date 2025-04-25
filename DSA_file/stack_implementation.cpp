#include<iostream>
using namespace std;
class stack{
    int size;
    int *arr;
    int top;
public:
    stack(int s){
        size = s;
        top = -1;
        arr = new int[s];
    }

    void push(int value){
        if(top == size - 1){
            cout<<"stack overflow"<<endl;
            return ;
        }
        else{
        top ++;
        arr[top] = value;
        cout<<"pushed "<<value<<" in the stack"<<endl;
        }
    }

    void pop(){
        if(top == -1){
            cout<<" stack underflow "<<endl;
            return ;
        }
        else{
            cout<<"poped "<<arr[top]<<" from the stack"<<endl;
            top--;
        }
    }

    int peek(){
        if(top == -1){
            cout<<"array is empty "<<endl;
            return -1;
        }
        return arr[top];
    }

    bool is_empty(){
        if(top == -1){
            return 1;
        }
        return 0;
    }

    int size_is(){
        return top + 1;
    }
};
int main(){
    stack s(5);
    s.push(1);
    s.push(2);
    s.push(7);
    s.push(5);
    s.push(3);
    s.pop();
    cout<<"size of stack is: "<<s.size_is();
    return 0;
}