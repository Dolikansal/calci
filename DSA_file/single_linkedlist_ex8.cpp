#include<iostream>
using namespace std;

class node {
public:
    int data;
    node *next;
    node(int value) {
        data = value;
        next = NULL;
    }
};

class linkedlist {
public:
    node *head;
    linkedlist() {
        head = NULL;
    }

    void insertathead(int n) {
        node *new_node = new node(n);
        new_node->next = head;
        head = new_node;
    }

    void insertatend(int n) {
        node *new_node = new node(n);
        if (head == NULL) {
            head = new_node;
            return;
        }
        node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void insertatanyposition(int n, int k) {
        node *new_node = new node(n);
        if (k == 1) { 
            new_node->next = head;
            head = new_node;
            return;
        }

        int count = 1;
        node *temp = head;
        while (count < k - 1 && temp != NULL) {
            temp = temp->next;
            count++;
        }

        if (temp == NULL) {
            cout << "Position out of range!" << endl;
            delete new_node;
            return;
        }

        new_node->next = temp->next;
        temp->next = new_node;
    }

    void deleteathead() {
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }
        node *temp = head;
        head = head->next;
        delete temp;
    }

    void deleteatend() {
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }
        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }
        node *temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        node *current = temp->next;
        temp->next = NULL;
        delete current;
    }

    void display() {
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }
        node *temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    linkedlist ll;
    char c;
    int x, k;

    do {
        cout << "Linked list operations: " << endl;
        cout << "Press H for Insert at Head" << endl;
        cout << "Press E for Insert at End" << endl;
        cout << "Press P for Insert at Any Position" << endl;
        cout << "Press D for Delete at Head" << endl;
        cout << "Press F for Delete at End" << endl;
        cout << "Press X to Exit" << endl;

        cout << "Enter your choice: ";
        cin >> c;

        switch (c) {
            case 'H': {
                cout << "Enter element to insert at head: ";
                cin >> x;
                ll.insertathead(x);
                break;
            }
            case 'E': {
                cout << "Enter element to insert at end: ";
                cin >> x;
                ll.insertatend(x);
                break;
            }
            case 'P': {
                cout << "Enter element to insert: ";
                cin >> x;
                cout << "Enter position to insert at: ";
                cin >> k;
                ll.insertatanyposition(x, k);
                break;
            }
            case 'D': {
                ll.deleteathead();
                break;
            }
            case 'F': {
                ll.deleteatend();
                break;
            }
            case 'X': {
                cout << "Exiting..." << endl;
                break;
            }
            default:
                cout << "Invalid choice!" << endl;
        }

        ll.display();
    } while (c != 'X');

    return 0;
}