#include<iostream>
#include<vector>
using namespace std;
class animal{
    public:
    virtual void  type(){
        cout<<"in animal class";
    }
};
class dog : public animal{
    public:
    void type(){
        cout<<"in dog class ";
    }
};

class cat : public animal{
    public:
    void type(){
        cout<<"in cat class ";
    }
};

int main(){
    // animal *a;
    // a = new dog;
    // a -> type();

    animal *p;
    vector<animal *>janvar;
    janvar.push_back(new dog);
    janvar.push_back(new cat);
    janvar.push_back(new animal);
    janvar.push_back(new dog);
    janvar.push_back(new cat);
    janvar.push_back(new animal);

    for(int i=0; i<janvar.size(); i++){
        p = janvar[i];
        p->type();
        cout<<endl;
    }

    return 0;
}