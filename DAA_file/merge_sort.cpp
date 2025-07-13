#include<iostream>
#include<vector>
using namespace std;

void merge(int start, int mid, int end, vector<int>& v) {
    int a1 = mid - start + 1;
    int b1 = end - mid;
    
    vector<int> a(a1), b(b1);  
    for (int i = 0; i < a1; i++) {
        a[i] = v[start + i];
    }
    for (int j = 0; j < b1; j++) {
        b[j] = v[mid + 1 + j];
    }
    int i = 0, j = 0, k = start; 
    while (i < a1 && j < b1) {
        if (a[i] <= b[j]) {
            v[k] = a[i];
            i++;
        } else {
            v[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < a1) {
        v[k] = a[i];
        i++;
        k++;
    }
    while (j < b1) {
        v[k] = b[j];
        j++;
        k++;
    }
}

void mergesort(int start, int end, vector<int>& v) {
    if (start < end) {
        int mid = start + (end - start)/2;
        
        mergesort(start, mid, v);
        mergesort(mid + 1, end, v);
        
        merge(start, mid, end, v);
    }
}

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    mergesort(0, n-1, v);
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}