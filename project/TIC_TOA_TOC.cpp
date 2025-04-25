#include<iostream>
#include<string>
#include<ctime>
using namespace std;
void draw_board(char *spaces){
    //draw a grid of nine spaces 
    cout<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<spaces[0]<<"  |  "<<spaces[1]<<"  |  "<<spaces[2]<<"  "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<spaces[3]<<"  |  "<<spaces[4]<<"  |  "<<spaces[5]<<"  "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<spaces[6]<<"  |  "<<spaces[7]<<"  |  "<<spaces[8]<<"  "<<endl;
    cout<<"     |     |     "<<endl;
    cout<<endl;
}
void player_move(char *spaces , char player){
    int number;     // select the player position 
    do{
        cout<<"select the postion you want to occupy in grid (1 to 9): ";
        cin>>number;
        number--;
        if(spaces[number] == ' '){
            spaces[number] = player;
            break;
        }
    }while(number >= 0 && number <= 8); // number should be between 1 to 9
}
void computer_move(char *spaces , char computer){
    int number;
    srand(time(0));

    while(true){
        number = rand() % 9;        // select a random number between 1 and 9 by computer 
        if(spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }
    }
}
bool check_winner(char *spaces , char player, char computer, string name){
    // all values match horizontally
    if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces [2]){
        spaces[0] == player ? cout<<"congratulations!! "<<name<<" you win "<<endl : cout<<"sorry!! "<<name<<" you loss "<<endl ;
    }
    else if(spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces [5]){
        spaces[3] == player ? cout<<"congratulations!! "<<name<<" you win "<<endl : cout<<"sorry!! "<<name<<" you loss "<<endl ;
    }
    else if(spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces [8]){
        spaces[6] == player ? cout<<"congratulations!! "<<name<<" you win "<<endl : cout<<"sorry!! "<<name<<" you loss "<<endl ;
    }
    //all values match digonaly
    else if(spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces [8]){
        spaces[0] == player ? cout<<"congratulations!! "<<name<<" you win "<<endl : cout<<"sorry!! "<<name<<" you loss "<<endl ;
    }
    else if(spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces [6]){
        spaces[2] == player ? cout<<"congratulations!! "<<name<<" you win "<<endl : cout<<"sorry!! "<<name<<" you loss "<<endl ;
    }

    //all values match vertically
    else if(spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces [6]){
        spaces[0] == player ? cout<<"congratulations!! "<<name<<" you win "<<endl : cout<<"sorry!! "<<name<<" you loss "<<endl ;
    }
    else if(spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces [7]){
        spaces[1] == player ? cout<<"congratulations!! "<<name<<" you win "<<endl : cout<<"sorry!! "<<name<<" you loss "<<endl ;
    }
    else if(spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces [8]){
        spaces[2] == player ? cout<<"congratulations!! "<<name<<" you win "<<endl : cout<<"sorry!! "<<name<<" you loss "<<endl ;
    }
    else{
        return false;
    }
    return true;
}
bool check_tie(char *spaces){
    for (int i =0; i< 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    cout<<"its a tie" <<endl;
    return true;
}


int main(){
cout<<"<<<<----------let's play TIC TOA TOC game------------>>>>"<<endl;
char spaces[9] = {' ',' ',' ',' ', ' ', ' ', ' ', ' ', ' '};
char player;   // takes the choice of plyer either 0 or x
string name;   // name of player
cout<<"please enroll with your name "<<endl;
cin>>name;
cout<<"enter the playes choice(either x or 0): ";
cin>>player;

char computer;    
if (player == 'x'){
    computer = '0';
}
else{
    computer = 'x';    //computer takes value opposite of player choice
}
cout<<"computer choice is: "<<computer<<endl;

bool running = true;

    draw_board(spaces);

    while(running){       // play till running is false
        player_move(spaces, player);
        draw_board(spaces);

        if(check_winner(spaces, player ,computer, name)){
            running = false;
            break;
        }
        else if(check_tie(spaces)){
            running = false;
            break;
        }

        computer_move(spaces, computer);
        draw_board(spaces);

        if(check_winner(spaces, player ,computer, name)){
            running = false;
            break;
        }
          else if(check_tie(spaces)){
            running = false;
            break;
        }
        
    }
    cout<<"THANKS! for playing "<<endl;
    cout<<"Have a nice day"<<endl;
    return 0;
}