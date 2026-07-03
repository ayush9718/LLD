#ifndef TIC_TAC_TOE_GAME_H
#define TIC_TAC_TOE_GAME_H

#include <deque>

#include "../models/Board.h"
#include "../models/Player.h"
#include "../models/PlayingPiece/PlayingPieceX.h"
#include "../models/PlayingPiece/PlayingPieceO.h"

class TicTacToeGame
{
private:
    Board* board;
    std::deque<Player*> players;

    bool isWinner(int row, int col, PlayingPiece* piece);

public:
    TicTacToeGame();

    void initializeGame();

    std::string startGame();

    ~TicTacToeGame();
};

#endif