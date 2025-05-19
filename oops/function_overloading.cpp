#include<iostream>
using namespace std;
class shape{
    public:
    int area(int r){
        int ans = 3.14 * r *r;
        return ans;
    }

    int area(int l , int b ){
        int res = l * b;
        return res;
    }

};
int main(){
    shape s;
     cout<<"area is: "<<s.area(5)<<endl;
     cout<<"area is: "<<s.area(2,3); 
    return 0;
}