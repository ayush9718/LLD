#include "Board.h"
#include <iostream>

using namespace std;

Board::Board(int size)
{
    this->size = size;

    board.resize(size);

    for(int i=0;i<size;i++)
    {
        board[i].resize(size,nullptr);
    }
}

bool Board::addPiece(int row,int col,PlayingPiece* piece)
{
    if(row<0 || row>=size || col<0 || col>=size)
        return false;

    if(board[row][col]!=nullptr)
        return false;

    board[row][col]=piece;

    return true;
}

vector<pair<int,int>> Board::getFreeCells() const
{
    vector<pair<int,int>> freeCells;

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(board[i][j]==nullptr)
            {
                freeCells.push_back({i,j});
            }
        }
    }

    return freeCells;
}

PlayingPiece* Board::getPiece(int row,int col) const
{
    return board[row][col];
}

int Board::getSize() const
{
    return size;
}

void Board::printBoard() const
{
    cout << endl;

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(board[i][j]==nullptr)
            {
                cout<<"   ";
            }
            else if(board[i][j]->getPieceType()==PieceType::X)
            {
                cout<<" X ";
            }
            else
            {
                cout<<" O ";
            }

            if(j!=size-1)
                cout<<"|";
        }

        cout<<endl;

        if(i!=size-1)
        {
            for(int j=0;j<size;j++)
            {
                cout<<"----";
            }
            cout<<endl;
        }
    }

    cout<<endl;
}