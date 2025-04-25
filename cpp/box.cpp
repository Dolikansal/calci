#include<iostream>
#include<vector>
using namespace std;
int main(){
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
    char player1 = box[0][0];
    char p1 = 's';
    box[0][0] = p1;
    char player2 = box[9][9];
    char p2 = 'c';
    box[9][9] = p2;

    cout<<"after regestration of players: "<<endl;

    int i =0;
    int j =0;
    while(i < 9){
        while(j < 9){
            if(box[i][j] == '*'){
                p1 = box[0][0];
            }
            else if(box[i][j] == '#'){
                p1 = box[i+5][j+5];
            }
            j++;
        }
        i++;
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cout<<box[i][j]<<"    ";
        }
        cout<<endl<<endl;
    }
    return 0;
} 