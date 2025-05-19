#include<iostream>
using namespace std;
class complex{
    int real, imaginary;
    public:
    complex(){

    }
    complex(int r , int i){
        real = r;
        imaginary = i;
    }
    void display(){
        cout<<real<<" + i"<<imaginary<<endl;
    }

    complex operator+ (complex &c){
        complex ans;
        ans.real = real + c.real;
        ans.imaginary = imaginary + c.imaginary;
        return ans;
    }
};
int main(){
    complex c1(3,2);
    c1.display();
    complex c2(4,3);
    c2.display();
    complex c3 = c1 + c2;
    c3.display();
    return 0;
}
