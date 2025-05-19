#include<iostream>
using namespace std;
class student{
    private:
    static int count;
    public:
    student(){
        count++;
    }
    static void showCount(){
        cout<<"count is: "<<count<<endl;//static function is used to access static object and if static object is not present function will show error
    }
};
int student::count=12;
int main(){
    student a,b,c,d,e,f,g,h;
    h.showCount();
    return 0;
}