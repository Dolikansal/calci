#include<iostream>
#include<string>
using namespace std;
int main(){
    
    int number;
    int guess;
    int tries = 0;
    
    string name;
    cout<<"please enroll with your name"<<endl;
    cin>>name;
    srand(time(NULL));
    number = (rand()%100) + 1;
    
    cout<<"***** NUMBER GUESSING GAME ***** \n";
    
    do{
        cout<<"enter a guess between (1 - 100 ) ";
        cin >> guess;
        tries++;
        
        if(guess > number){
            cout<<"guess is too high "<<endl;
        }
        else if(guess < number){
            cout<<"guess is too low "<<endl;
        }
        else{
            cout<<"Congratulations !!" << name << "you guess the correct number "<<endl;
            cout<<"number of tries is: "<<tries<<endl;
        }
    }while(guess != number);
     cout<<"the number was "<<number<<endl;
    cout<<"the game is finished !! Thanks for your visit "<<endl;
    return 0;
}