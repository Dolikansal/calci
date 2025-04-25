#include<iostream>
using namespace std;
void test(int x){
    try{
        if(x == 1){
            throw(x);
        }
        else if(x == 0){
            throw('x');
        }
        else if(x == -1){
            throw(1.0);
        }
    }

    catch(char c){
        cout<<"caught a char: ";
    }
    catch(int m){
        cout<<"caugth an integer: ";
    }
    catch(double p){
        cout<<"double value: ";
    }
}
int main(){
    test(6);

    return 0;
}