#include<iostream>
using namespace std;

template<typename T, int order>
class BtreeNode {
public:
    T keys[order - 1];                // Array of keys
    BtreeNode* child[order];          // Array of child pointers
    int n;                            // Current number of keys
    bool leaf;                        // Is true if leaf node

    BtreeNode(bool is_leaf = true) : n(0), leaf(is_leaf) {
        for (int i = 0; i < order; i++) {
            child[i] = nullptr;
        }
    }
};

template<typename T, int order>
class Btree {
    BtreeNode<T, order>* root;

public:
    Btree() : root(nullptr) {}

    void splitChild(BtreeNode<T, order>* x, int i) {
        BtreeNode<T, order>* y = x->child[i];
        BtreeNode<T, order>* z = new BtreeNode<T, order>(y->leaf);
        z->n = order / 2 - 1;

        for (int j = 0; j < order / 2 - 1; j++) {
            z->keys[j] = y->keys[j + order / 2];
        }

        if (!y->leaf) {
            for (int j = 0; j < order / 2; j++) {
                z->child[j] = y->child[j + order / 2];
            }
        }

        y->n = order / 2 - 1;

        for (int j = x->n; j >= i + 1; j--) {
            x->child[j + 1] = x->child[j];
        }

        x->child[i + 1] = z;

        for (int j = x->n; j >= i; j--) {
            x->keys[j + 1] = x->keys[j];
        }

        x->keys[i] = y->keys[order / 2 - 1];
        x->n = x->n + 1;
    }

    void insertnonfull(btree<t, order >*x , T k){
        int i = x->n-1;
        if(x->leaf){
            while(i>= 0 && k<x->keys[i]){
                x->keys[i+1] = x->keys[i];
                i--;
            }
            x->keys[i+1] = k;
            x->n = x->n+1;
        }
        else{
            while(i>= 0 && k < x->keys[i]){
                i--;
            }
            i++;
        }
        if(x->child[i]->n == order-1){
            splitChild(x,i);

            if(k > x->keys[i]){
                i++;
            }
            insertnonfull(x->chil[i], k);
        }
    }
    void traverse(btree<t, order>*x){
            int i; 
            for(int i = 0 ; i<x->n; i++){
                if(!x->leaf){
                    traverse(x->child[i]);
                    cout<<" "<<x->keys[i];
                }
                if(!x->leaf){
                    traverse(x->child[i]);
                }
            }
        }
    btree<t, order > *search(btree<t, order>*x , T k){
            int i =0;
            while(i< x->n && k>x->keys[i]){
                i++;
            }
            if(i<x->n && k == x->keys[i]){
                return x;
            }
            if(x->leaf){
                return nullptr;
            }
            return search(x->child[i],  k);
        }
};
