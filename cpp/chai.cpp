#include <iostream>
#include <string>

using namespace std;

// you just need to implement this function
bool containsGlitchPattern(const string& v, const string& g) {
    // your code here
    long long n = v.length();
    long long m = g.length();

    int i = 0 , j = 0, k = 0;
    while(i < n && j < m){
        if(v[i] == g[j]){
             k = 0;
            while(k < m){
                if(v[i] == g[k]){
                    k++;
                    i++;
                }
            }
        }
        i++;
    }
    if(k == m ){
        return true;
    }
    return false;
 }

int main() {
    string videoStream, glitchPattern;
    cin >> videoStream;
    cin >> glitchPattern;

    // please do not change the below code
    if (containsGlitchPattern(videoStream, glitchPattern)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}