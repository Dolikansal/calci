#include<iostream>
#include<vector>
using namespace std;

class segment_tree {
    vector<int> tree;
    vector<int> arr;
    int n;

public:  
    segment_tree(vector<int> input) {
        n = input.size();
        arr = input;
        tree.resize(4 * n);
        build(0, 0, n - 1);
    }

    void build(int node, int start, int end) {
        if (start == end) {
            tree[node] = arr[start];
            return;
        }
        int mid = start + (end - start) / 2;
        build(2 * node + 1, start, mid);
        build(2 * node + 2, mid + 1, end);
        tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
    }

    int range(int node, int start, int end, int left, int right) {
        if (end < left || start > right) {
            return 0;
        }
        if (start >= left && end <= right) {
            return tree[node];
        }
        int mid = start + (end - start) / 2;
        return range(2 * node + 1, start, mid, left, right) + range(2 * node + 2, mid + 1, end, left, right);
    }

    void updating(int node, int start, int end, int idx, int val) {
        if (idx > end || idx < start) {
            return;
        }
        if (start == end) {
            tree[node] = val;
            arr[idx] = val;  
            return;
        }

        tree[node] += val - arr[idx];
        int mid = start + (end - start) / 2;
        updating(2 * node + 1, start, mid, idx, val);
        updating(2 * node + 2, mid + 1, end, idx, val);
    }

    int query(int left, int right) {
        return range(0, 0, n - 1, left, right);
    }

    void update(int idx, int val) {
        updating(0, 0, n - 1, idx, val);
    }
};

int main() {
    vector<int> arr = {3, 6, 4, 25, 5, 13, 18};
    segment_tree *tree = new segment_tree(arr);
    tree->update(2, 10);
    cout << tree->query(2, 5) << endl;
   
    return 0;
}
