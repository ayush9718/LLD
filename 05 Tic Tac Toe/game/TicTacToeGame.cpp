#include "TicTacToeGame.h"

#include <iostream>

using namespace std;

TicTacToeGame::TicTacToeGame()
{
    initializeGame();
}

void TicTacToeGame::initializeGame()
{
    board = new Board(3);

    PlayingPiece* x = new PlayingPieceX();
    PlayingPiece* o = new PlayingPieceO();

    Player* player1 = new Player("Player1", x);
    Player* player2 = new Player("Player2", o);

    players.push_back(player1);
    players.push_back(player2);
}

string TicTacToeGame::startGame()
{
    while(true)
    {
        board->printBoard();

        if(board->getFreeCells().empty())
        {
            return "DRAW";
        }

        Player* currentPlayer = players.front();
        players.pop_front();

        cout << currentPlayer->getName() << "'s Turn" << endl;
        cout << "Enter Row and Column : ";

        int row, col;
        cin >> row >> col;

        bool added = board->addPiece(row,col,currentPlayer->getPlayingPiece());

        if(!added)
        {
            cout << "Invalid Position!! Try Again.\n";
            players.push_front(currentPlayer);
            continue;
        }

        if(isWinner(row,col,currentPlayer->getPlayingPiece()))
        {
            board->printBoard();
            return currentPlayer->getName();
        }

        players.push_back(currentPlayer);
    }
}

bool TicTacToeGame::isWinner(int row,int col,PlayingPiece* piece)
{
    int size = board->getSize();

    bool rowMatch = true;
    bool colMatch = true;
    bool diagonalMatch = true;
    bool antiDiagonalMatch = true;

    // Row
    for(int i=0;i<size;i++)
    {
        PlayingPiece* p = board->getPiece(row,i);

        if(p==nullptr ||
           p->getPieceType()!=piece->getPieceType())
        {
            rowMatch = false;
            break;
        }
    }

    // Column
    for(int i=0;i<size;i++)
    {
        PlayingPiece* p = board->getPiece(i,col);

        if(p==nullptr ||
           p->getPieceType()!=piece->getPieceType())
        {
            colMatch = false;
            break;
        }
    }

    // Main Diagonal
    if(row==col)
    {
        for(int i=0;i<size;i++)
        {
            PlayingPiece* p = board->getPiece(i,i);

            if(p==nullptr ||
               p->getPieceType()!=piece->getPieceType())
            {
                diagonalMatch = false;
                break;
            }
        }
    }
    else
    {
        diagonalMatch = false;
    }

    // Anti Diagonal
    if(row+col==size-1)
    {
        for(int i=0;i<size;i++)
        {
            PlayingPiece* p = board->getPiece(i,size-1-i);

            if(p==nullptr ||
               p->getPieceType()!=piece->getPieceType())
            {
                antiDiagonalMatch = false;
                break;
            }
        }
    }
    else
    {
        antiDiagonalMatch = false;
    }

    return rowMatch ||
           colMatch ||
           diagonalMatch ||
           antiDiagonalMatch;
}

TicTacToeGame::~TicTacToeGame()
{
    delete board;

    while(!players.empty())
    {
        delete players.front();
        players.pop_front();
    }
}