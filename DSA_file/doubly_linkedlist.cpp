#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node *prev;
    node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};

class double_linkedlist{
    public:
    node *head;
    node *tail;
    double_linkedlist(){
        head = NULL;
        tail = NULL;
    }

    void insertionathead(int value){
        node *new_node = new node(value);
        if(head == NULL){
            head = new_node;
            tail = new_node;
            return ;
        }
        new_node->next = head;
        head ->prev = new_node;
        head = new_node;
    }

    void insertionatposition(int value, int pos){
        node *new_node= new node(value);
        if(pos == 1){
            insertionathead(value);
            return ;
        }
        node *temp = head;
        int count = 0;
        while(count < pos-1){
            temp = temp->next;
            count++;
        }
        new_node ->next = temp->next;
        temp->next = new_node;
        new_node->prev = temp;
        new_node->next->prev = new_node;
    }

    void deleteathead(){
        if(head == NULL){
            return ;
        }
        node *temp = head;
        head = head -> next;
        if(head != NULL){
            head->prev = NULL;
        }
        delete temp;
    }
    void display(){
        node *temp = head;
        while(temp ->next != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    cout<<"double linked list is: "<<endl;
    double_linkedlist dll;
    dll.insertionathead(5);
    dll.insertionathead(4);
    dll.insertionathead(7);
    dll.insertionathead(6);
    dll.display();
    dll.insertionatposition(2,2);
    dll.display();
    dll.insertionatposition(9,3);
    dll.display();
    return 0;
}