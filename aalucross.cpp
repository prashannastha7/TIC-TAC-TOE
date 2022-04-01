#include <iostream>
using namespace std;
int main()
{
    cout << "\t\t**** WELCOME TO GAME ****" << endl
         << endl;
    cout << "PROGRAMMER: \n\n";
    cout << "\t   Prashanna B Shrestha" << endl;

    int player;
    int winner;
    int choice;
    int Row;
    int column;
    int line;
    char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}};

    for (int i = 0; i < 9 && winner == 0; i++)
    {
        cout << "\n\n";
        cout << board[0][0] << " |" << board[0][1] << " |" << board[0][2] << "\n";
        cout << "--|--|--\n";
        cout << board[1][0] << " |" << board[1][1] << " |" << board[1][2] << "\n";
        cout << "--|--|--\n";
        cout << board[2][0] << " |" << board[2][1] << " |" << board[2][2] << "\n";

        player = i % 2 + 1;

        do
        {
            if (player == 1)
            {
                cout << "\n Player 1, Enter the number where you want to place ";
            }
            else if (player == 2)
            {
                cout << "\n Player 2, Enter the number where you want to place ";
            }
            else
            {
                cout << "You enter from out of range number";
            }
            cout << player, (player == 1) ? 'X' : 'O';
            cout << "\n";
            cin >> choice;

            Row = --choice / 3;
            column = choice % 3;
        } while (choice < 0 || choice > 9 || board[Row][column] > '9');

        board[Row][column] = (player == 1) ? 'X' : 'O';

        if( 
        ((board[0][0] == board[1][1] && board[0][0] == board[2][2]) ||
         (board[0][2] == board[1][1] && board[0][2] == board[2][0]))
                (winner = player);
                break);
    
        
        
        else
        {
            for (line = 0; line <= 2; line++)
                if ((board[line][0] == board[line][1] && board[line][0] == board[line][2]))
                    if ((board[0][line] == board[1][line] && board[0][line] == board[2][line]))
                        winner = player;
        }

        cout << "\n\n";
        cout << board[0][0] << " |" << board[0][1] << " |" << board[0][2] << "\n";
        cout << "--|--|--\n";
        cout << board[1][0] << " |" << board[1][1] << " |" << board[1][2] << "\n";
        cout << "--|--|--\n";
        cout << board[2][0] << " |" << board[2][1] << " |" << board[2][2] << "\n";

        if (winner == 0)
            cout << "The game is draw\n";
        else
            (cout << "\nPlayer " << winner << " has won\n");
            }}