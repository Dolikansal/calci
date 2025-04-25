#include<iostream>
#include<string>
using namespace std;
class person{
    string name;
    int age;
    public:
    person(){
        name = "kansal";
        age = 0;
    }  
    friend ostream &operator <<(ostream &output , person &p);
    friend istream &operator >>(istream &input , person &p);
};
    ostream &operator <<(ostream &output , person &p){
        output << "extraction using output "<<endl;
        output <<"my name is: "<<p.name<<" and my age is: "<<p.age<<endl;
        return output;
    }

    istream &operator >>(istream  &input , person &p){
        input >> p.name >> p.age ;
        return input;
    }

int main(){ 
    cout<<"enter the name and age of person: "<<endl;
    person p;
    cin>>p;
    cout<<p;
    return 0;
}