// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<queue>
// using namespace std;
// int kth(vector<int>&arr,int k,int j){
//     sort(arr.begin(),arr.end());
//     int sum=0;
//     for(int i=k;i<j-1;i++){
//         sum=sum+arr[i];
//     }
//     return sum;
// }

// int heap(vector<int>arr,int k,int j){
//     priority_queue<int>p1;
//     priority_queue<int>p2;
//     int result=0;
//     int sum=0;
//     int total=0;
//     for(int i=0;i<k;i++){
//         p1.push(arr[i]);
//     }
//     for(int i=0;i<j;i++){
//         p2.push(arr[i]);
//     }
//     while(!p1.empty()){
//         sum=sum+p1.top();
//         p1.pop();

//     }
//     while(!p2.empty()){
//         total=total+p2.top();
//         p2.pop();

//     }
//     result=total-sum;
//     return result;
// }
// // int third(vector<int>&arr,int k){
// //     priority_queue<int,vector<int>,greater<int>>p;
// //     for(int i=0;i<k;i++){
// //         p.push(arr[i]);
// //     }
// //     for(int i=k;i<arr.size();i++){
// //         if(arr[i]>p.top()){
// //             p.pop();
// //             p.push(arr[i]);
// //         }
// //     }
// //     return p.top();
// // }
// int main(){
//     int n;
//     cout<<"enter the size of array ";
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k; // 10 2 50 12 48 13 --> 2 10 12 13 48 50 
//     cout<<"enter the value of k";
//     cin>>k;
//     int j;
//     cout<<"enter second limit: ";
//     cin>>j;
//     // int sum=kth(arr,k,j);
//     // cout<<sum;
//     int sum=heap(arr,k,j-1);
//     cout<<sum;
//     return 0;
// }

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
class Solution {
public:
    int plusOne(vector<int>& digits) {
        int res=0;
        for(int i=0;i<digits.size();i++){
            res=res*10+digits[i];
        }
        cout<< res;
    }
};
int main(){
    vector<int>a ={1,2,3,4};
    Solution sol;
    sol.plusOne(a);
    return 0;
}