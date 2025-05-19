#include<iostream>
using namespace std;
class base{
    public:
    virtual ~base(){
        cout<<"destroyed base class destructor"<<endl;
    }
};

class derived : public base{
    public:
    ~derived(){
        cout<<"destroyed derived class destructor"<<endl;
    }
};

int main(){
    base *ptr = new derived;
    delete ptr;
    return 0;
}