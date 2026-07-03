#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <utility>
#include "PlayingPiece/PlayingPiece.h"

class Board
{
private:
    int size;
    std::vector<std::vector<PlayingPiece*>> board;

public:
    Board(int size);

    bool addPiece(int row, int col, PlayingPiece* piece);

    std::vector<std::pair<int,int>> getFreeCells() const;

    void printBoard() const;

    PlayingPiece* getPiece(int row, int col) const;

    int getSize() const;
};

#endif