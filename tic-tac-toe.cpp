#include <iostream>
using namespace std;
void displayboard();
void position();
bool win();

char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
string player1, player2;
char key = 'X';
int row, column;
bool tie = false;

int main(void) 
{
    //Players name input.
    cout << "Enter player 1 name: " << endl;
    getline(cin,player1);
    cout << "Enter player 2 name: " << endl;
    getline(cin,player2);
    cout << "----------------------------------------------------------" << endl;
    cout << player1 << ", plays first and " << player2 << " plays next." << endl;
    cout << "----------------------------------------------------------" << endl;
    
    //Game loop.
    while (!win())
    {
        displayboard();
        position();
        win();
    }

    //Winner declaration.
    if (key == 'X' && tie == false) {
        cout << player2 << ", wins the game!!!" << endl;
    } else if (key == 'O' && tie == false) {
        cout << player1 << ", wins the game!!!" << endl;
    } else {
        cout << "It's a tie!" << endl;
    }
    
    return 0;
}

//Displays the board when called.
void displayboard() 
{
    cout <<"-----------" << endl;
    cout << " " <<board[0][0]<< " " <<"|"<<" "<<board[0][1]<< " " <<"|"<< " " <<board[0][2]<< " " <<endl;
    cout <<"---|---|---" << endl;
    cout << " " <<board[1][0]<< " " <<"|"<<" "<<board[1][1]<< " " <<"|"<< " " <<board[1][2]<< " " <<endl;
    cout <<"---|---|---" << endl;
    cout << " " <<board[2][0]<< " " <<"|"<<" "<<board[2][1]<< " " <<"|"<< " " <<board[2][2]<< " " <<endl;
    cout <<"-----------" << endl;
}

//Updates the values at the position in the board.
void position() 
{
    int positionVar;

    //Input position from the user.
    if (key == 'X') {
        cout << player1 <<", enter the position." << endl;
        cin >> positionVar;
    } else if (key == 'O')  {
        cout << player2 <<", enter the position." << endl;
        cin >> positionVar;
    }
    
    //Updates the board cordinated w.r.t position variable. 
    if (positionVar == 1) {
        row = 0;
        column = 0;
    } else if (positionVar == 2) {
        row = 0;
        column = 1;
    } else if (positionVar == 3) {
        row = 0;
        column = 2;
    } else if (positionVar == 4) {
        row = 1;
        column = 0;
    } else if (positionVar == 5) {
        row = 1;
        column = 1;
    } else if (positionVar == 6) {
        row = 1;
        column = 2;
    } else if (positionVar == 7) {
        row = 2;
        column = 0;
    } else if (positionVar == 8) {
        row = 2;
        column = 1;
    } else if (positionVar == 9) {
        row = 2;
        column = 2;
    } else {
        cout << "Invalid positon!" << endl;
    }

    //Updates the value in the board after inputing position.
    if (key == 'X' && board[row][column] != 'X' && board[row][column] != 'O') {
        board[row][column] = 'X';
        key = 'O';
    } else if (key == 'O' && board[row][column] != 'X' && board[row][column] != 'O') {
        board[row][column] = 'O';
        key = 'X';
    } else {
        cout << "There is no space!" << endl;
        position();
    }
}

//Gives the status of the game whether if the game still has to proceed.
bool win()
{
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] || board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return true;
        }
    }

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] || board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return true;
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != 'X' || board[i][j] == 'O') {
                return false;
            }
        }
        
    }
    tie = true;
    return false;
}