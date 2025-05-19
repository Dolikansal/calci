#include<iostream>
#include<ctime>
#include<string>
using namespace std;
//second player turn
void second_player(vector<vector<char> >&box, char &p2){
    int i =0;
    int j =0;
    while(i < 9){
        j = 0;
        while(j < 9){
            if(box[i][j] == '*'){
                 box[0][0] = p2;
            }
            else if(box[i][j] == '#'){
                if(i + 5 < 10 && j + 5 < 10){
                box[i+5][j+5] = p2;
                }
            }
            else{
                 box[i][j] = p2; 
            }
            j++;
        }
        i++;
    }
}

//first player turn
void first_player(vector<vector<char> >&box, char &p1){
    int i =0;
    int j =0;
    while(i < 9){
        j = 0;
        while(j < 9){
            if(box[i][j] == '*'){
                box[0][0] = p1;
            }
            else if(box[i][j] == '#'){
                if(i+5 < 10 && j + 5 < 10){
                 box[i+5][j+5] = p1;
                }
            }
            else{
                box[i][j] = p1;
            }
            j++;
        }
        i++;
    }

}
//winner is annouanced
bool winner_first(vector<vector<char> >&box , char &p1){
    if(p1 == box[9][9]){
        cout<<"first player is winnwer";
        return true;
    }
    return false;
}
//winner is annouanced
bool winner_second(vector<vector<char> >&box , char &p2){
    if(p2 == box[0][0]){
        cout<<"second player is winnwer";
        return true;
    }
    return false;
}
//create the game board
vector<vector<char> >game_board(char &p1, char &p2){
       char a;
    vector<vector<char> >box(10, vector<char>(10, '.'));
    for(int i=0; i<100 ; i++){
        if(i%8 == 0){
            a = '#';
        }
        else if( i % 13 == 0){
            a = '*';
        }
        else{
            a ='.';
        }
        int row = i / 10;
        int coloumn = i % 10;
        if(row < 10 && coloumn < 10){
            box[row][coloumn] = a;
        }
    }
    box[0][0] = p1;
    box[9][9] = p2;

     for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cout<<box[i][j]<<"    ";
        }
        cout<<endl<<endl;
    }

    return box;
}

int main(){
    cout<<"<<-------lets play snake bite game-------->>"<<endl;
    string player1;
    cout<<"enroll with first player name: ";
    cin>>player1;
    cout<<"choose the sign for first player: ";
    char p1;
    cin>>p1;
    string player2;
    cout<<"enroll with second player name: ";
    cin>>player2;
    cout<<"choose the sign for second player: ";
    char p2;
    cin>>p2;
    vector<vector<char> >board = game_board(p1, p2);
    while(true){
    cout << "It's turn for first player (y to play): ";
    char c;
    cin >> c;
    if(c == 'y'){
        first_player(board, p1);
        if(winner_first(board, p1)){
            break;
        }
    }

    cout << "It's turn for second player (y to play): ";
    char k;
    cin >> k;
    if(k == 'y'){
        second_player(board, p2);
        if(winner_second(board, p2)){
            break;
        }
    }
    for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                cout << board[i][j] << "    ";
            }
            cout << endl << endl;
        }
}

    return 0;
}