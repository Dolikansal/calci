#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>& v, int start, int mid, int end) {
    int left = start, right = mid + 1, index = 0;
    vector<int> temp(end - start + 1);
    while (left <= mid && right <= end) {
        if (v[left] < v[right]) {
            temp[index] = v[left];
            index++, left++;
        } else {
            temp[index] = v[right];
            index++, right++;
        }
    }
    
    while (left <= mid) {
        temp[index] = v[left];
        index++, left++;
    }
    
    while (right <= end) { 
        temp[index] = v[right];
        index++, right++;
    }

    for (int i = 0; i < temp.size(); i++) {
        v[start + i] = temp[i];
    }
    
    return v;
}
vector<int> mergesort(vector<int>& v, int start, int end) {
    if (start >= end) {
        return v; 
    }
    
    int mid = start + (end - start) / 2;
    mergesort(v, start, mid);
    mergesort(v, mid + 1, end);
    merge(v, start, mid, end);
    
    return v; 
}

int main() {
    int n;
    cout << "enter the size of vector: ";
    cin >> n;
    vector<int> v(n);
    cout << "enter the element of vector: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<int> ans = mergesort(v, 0, n - 1); 
    
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    
    return 0;
}