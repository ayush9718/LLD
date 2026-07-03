#include <iostream>
#include "game/TicTacToeGame.h"

using namespace std;

int main()
{
    TicTacToeGame game;

    string winner = game.startGame();

    if(winner == "DRAW")
    {
        cout << "\nGame Draw!\n";
    }
    else
    {
        cout << "\nWinner is : " << winner << endl;
    }

    return 0;
}