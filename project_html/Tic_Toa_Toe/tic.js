let turn = 'O';
let count = 0;

let wining = [
    [0, 1, 2], [3, 4, 5], [6, 7, 8],
    [0, 3, 6], [1, 4, 7], [2, 5, 8],
    [0, 4, 8], [2, 4, 6]
];

let board_ele = new Array(9).fill('e');
const board = document.querySelector('.container'); 

function check_winner() {
    for (let [ind1, ind2, ind3] of wining) {
        if (board_ele[ind1] !== 'e' && board_ele[ind1] === board_ele[ind2] && board_ele[ind2] === board_ele[ind3]) {
            return true;
        }
    }
    return false;
}

const printer = (event) => {
    const element = event.target;
    if (board_ele[element.id] === 'e') {
        count++;
        if (turn === 'O') {
            element.innerHTML = 'O';
            board_ele[element.id] = 'O';
            if (check_winner()) {
                document.getElementById('winningMessage').innerHTML = "Winner is player with O";
                board.removeEventListener('click', printer);
                return;
            }
            turn = "X";  
        } else {
            element.innerHTML = 'X';
            board_ele[element.id] = 'X';
            if (check_winner()) {  
                document.getElementById('winningMessage').innerHTML = "Winner is player with X";
                board.removeEventListener('click', printer);
                return;
            }
            turn = "O";
        }
        if (count === 9) {
            document.getElementById('winningMessage').innerHTML = "Match is Draw";
            board.removeEventListener('click', printer);
        }
    }
};

board.addEventListener('click', printer); 

const Restart = document.getElementById("restartButton");
Restart.addEventListener('click', () => {
    const cells = document.getElementsByClassName('cell');
    Array.from(cells).forEach(cell => cell.innerHTML = "");

    turn = "O";
    count = 0;
    board_ele = new Array(9).fill('e');
    document.getElementById('winningMessage').innerHTML = "";
    board.addEventListener('click', printer); 
});
