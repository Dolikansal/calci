#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}
//subtraction of number
int diff(int a, int b){
    return abs(a-b);
}
//multiplication of number
int multiply(int a, int b){
    return a*b;
}
//division of number
int division(int a, int b){
    if(b == 0){
    cout<<"invalid number";
    return -1;
    }
    else{
    return a/b;
    }
}

int main(){
    int first;
    int second;
    cout<<"enter first number: ";
    cin>>first;
    cout<<"enter second number: ";
    cin>>second;

    cout<<"addition of two number is: "<<add(first, second)<<endl;
    cout<<"subtraction of two number is: "<<diff(first, second)<<endl;
    cout<<"multiplication of two number is: "<<multiply(first, second)<<endl;
    cout<<"division of two number is: "<<division(first, second)<<endl;
    return 0;
}