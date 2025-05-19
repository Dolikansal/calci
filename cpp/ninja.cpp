#include <bits/stdc++.h>
using namespace std;

vector<int> addOneToNumber(vector<int> digits) {
    long long num = 0;
    for (int i = 0; i < digits.size(); i++) {
        num = num * 10 + digits[i];
    }
    num = num + 1;
    
    vector<int> ans;
    while (num > 0) {
        ans.push_back(num % 10);
        num = num / 10;
    }
    reverse(ans.begin(), ans.end());
    
    return ans;
}

int main() {
    int testCases;
    cin >> testCases; // Read number of test cases
    while (testCases--) {
        int n;
        cin >> n; // Read the number of digits
        vector<int> digits(n);
        for (int i = 0; i < n; i++) {
            cin >> digits[i]; // Read each digit
        }
        
        vector<int> result = addOneToNumber(digits);
        
        // Output the result
        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
        cout << endl; // New line after each test case output
    }
    
    return 0;
}